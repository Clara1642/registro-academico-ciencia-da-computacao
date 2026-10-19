package AcademiaPorMetas;

public class AlunoPremium extends UsuarioFitness implements Monitoravel {
    private int[] minutosPorDia;
    private int totalMinutos;
    private double caloriasEstimadas;
    private int limitePremium;

    public AlunoPremium(String nome, String senha, String plano, int metaSemanal, int[] minutosPorDia, int totalMinutos,double caloriasEstimadas,int limitePremium) {
        super(nome, senha, plano, metaSemanal);
        this.minutosPorDia = minutosPorDia;
        this.totalMinutos = totalMinutos;
        this.caloriasEstimadas = caloriasEstimadas;
        this.limitePremium = limitePremium;
    }

    public int[] getMinutosPorDia() {
        return minutosPorDia;
    }
    public void setMinutosPorDia(int[] minutosPorDia) {
        this.minutosPorDia = minutosPorDia;
    }
    public int getTotalMinutos() {
        return totalMinutos;
    }
    public void setTotalMinutos(int totalMinutos) {
        this.totalMinutos = totalMinutos;
    }
    public double getCaloriasEstimadas() {
        return caloriasEstimadas;
    }
    public void setCaloriasEstimadas(double caloriasEstimadas) {
        this.caloriasEstimadas = caloriasEstimadas;
    }
     public int getLimitePremium() {
        return limitePremium;
    }

    public void setLimitePremium(int limitePremium) {
        this.limitePremium = limitePremium;
    }

    public double calcularCobranca(){
        double valorASerPago = 0;

        if(getPlano().equalsIgnoreCase("Basico")){
            valorASerPago = 120;
        }
       
        else if(getPlano().equalsIgnoreCase("Plus")){
            valorASerPago = 170;
        }

        else if(getPlano().equalsIgnoreCase("Premium")){
            valorASerPago = 230;
        }

        if(getTotalMinutos() >= getMetaSemanal()){
            valorASerPago = valorASerPago  -  valorASerPago * 0.15;
        }
        return valorASerPago;
    }

    public void registrarSessao(int minutos) throws MetaInvalidaException{

        if(minutos <= 0) {
            throw new MetaInvalidaException(" O valor informado é negativo ou zero.");
        }
        else if(minutos > getLimitePremium()) {
            throw new MetaInvalidaException("Acima do limite diário permitido.");
        }

        for(int i = 0; i < getMinutosPorDia().length;i++){
            if(getMinutosPorDia()[i] == 0){
                getMinutosPorDia()[i] = minutos;
                setTotalMinutos(getTotalMinutos() + minutos);
                break;
            }
        }
    }

    public void calcularIndicador(){
        setCaloriasEstimadas(getTotalMinutos() * 8);
    }

    
}

package PlataformaDeEntregas;

public class EntregadorApp extends Entregador implements Roteirizavel {
    private int[][] entregasPorRegiao;
    private double distanciaTotal;
    private int tempoTotal;
    private double bonus;

    public EntregadorApp(String id, String nome, String modalidade, double avaliacaoMedia, int[][] entregasPorRegiao,
            double distanciaTotal, int tempoTotal, double bonus) {
        super(id, nome, modalidade, avaliacaoMedia);
        this.entregasPorRegiao = entregasPorRegiao;
        this.distanciaTotal = distanciaTotal;
        this.tempoTotal = tempoTotal;
        this.bonus = bonus;
    }

    public int[][] getEntregasPorRegiao() {
        return entregasPorRegiao;
    }
    public void setEntregasPorRegiao(int[][] entregasPorRegiao) {
        this.entregasPorRegiao = entregasPorRegiao;
    }
    public double getDistanciaTotal() {
        return distanciaTotal;
    }
    public void setDistanciaTotal(double distanciaTotal) {
        this.distanciaTotal = distanciaTotal;
    }
    public int getTempoTotal() {
        return tempoTotal;
    }
    public void setTempoTotal(int tempoTotal) {
        this.tempoTotal = tempoTotal;
    }
    public double getBonus() {
        return bonus;
    }
    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    public double calcularPagamentoBase(){
        double pagamentoBase = 0;
        if(getModalidade().equalsIgnoreCase("Bike")){
            pagamentoBase = getDistanciaTotal() * 1.50;
        }
        else if(getModalidade().equalsIgnoreCase("Moto")){
            pagamentoBase = getDistanciaTotal() * 2.30;
        }
        else if(getModalidade().equalsIgnoreCase("Carro")){
            pagamentoBase = getDistanciaTotal() * 3.00;
        }
        return pagamentoBase;
    }
 
    public void registrarEntrega(int linha,int coluna,int tempo,int distancia,int avaliacao)throws EntregaInvalidaException{
        if(distancia < 0){
            throw new EntregaInvalidaException("Distância inválida.");
        }
        else if(avaliacao < 0 || avaliacao > 5){
            throw new EntregaInvalidaException("A avaliação está fora da faixa permitida.");
        }
        else if(getTempoTotal() + tempo > 60){
            throw new EntregaInvalidaException("O tempo ultrapassou o limite de segurança.");
        }
        else if(linha < 0 || linha >= getEntregasPorRegiao().length || coluna < 0 || coluna >= getEntregasPorRegiao()[linha].length){
            throw new EntregaInvalidaException("A região não existe.");
        }
        else if(getEntregasPorRegiao()[linha][coluna] == 0){
            getEntregasPorRegiao()[linha][coluna] = 1;
            setDistanciaTotal(getDistanciaTotal() + distancia);
            setTempoTotal(getTempoTotal() + tempo);
            setAvaliacaoMedia(getAvaliacaoMedia() + avaliacao);
        }
       
    }

    public double calcularDesempenho(double avaliacao,int tempo){
        double soma = 0;
        double media = 0;
        for(int i = 0; i < getEntregasPorRegiao().length; i++){
            for(int j = 0; j < getEntregasPorRegiao()[i].length; j++){
               soma = soma + getEntregasPorRegiao()[i][j];
            }
        }
        if(soma == 0){
            return getBonus();
        }
        media = getAvaliacaoMedia() / soma;
        if(media >= 4.7 && tempo < getTempoTotal()){
            setBonus(calcularPagamentoBase() * 0.2);
        }
        return getBonus();
    }

   
    
}

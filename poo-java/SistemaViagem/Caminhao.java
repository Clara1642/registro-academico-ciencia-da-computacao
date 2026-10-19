package SistemaViagem;

public class Caminhao extends Veiculo implements Relatorio {
    private double[] consumoUltimasViagens = new double[10];
    private String motoristaResponsavel;
    private double valorDiesel;
    private double soma = 0;


    public Caminhao(String placa, String modelo, double capacidadeTanque,double quilometragemTotal,String motoristaResponsavel, double valorDiesel) {
        super(placa, modelo, capacidadeTanque, quilometragemTotal);
        this.motoristaResponsavel = motoristaResponsavel;
        this.valorDiesel = valorDiesel;
    }

    public double[] getConsumoUltimasViagens() {
        return consumoUltimasViagens;
    }
    public void setConsumoUltimasViagens(double[] consumoUltimasViagens) {
        this.consumoUltimasViagens = consumoUltimasViagens;
    }
    public String getmotoristaResponsavel() {
        return motoristaResponsavel;
    }
    public void setmSotoristaResponsavel(String motoristaResponsavel) {
        this.motoristaResponsavel = motoristaResponsavel;
    }
    public double getValorDiesel() {
        return valorDiesel;
    }
    public void setValorDiesel(double valorDiesel) {
        this.valorDiesel = valorDiesel;
    }
     public double getSoma() {
        return soma;
    }

    public void setSoma(double soma) {
        this.soma = soma;
    }


    public double calcularConsumoMedio(){
        setSoma(0);
        for(int i = 0; i < 10;i++){
            setSoma(getConsumoUltimasViagens()[i] + getSoma());
        }

        return soma / 10 ;
    }

    public double calcularCustoViagem(){
        double result = 0;
        double consumoMedio = calcularConsumoMedio();
        if(consumoMedio == 0){
            return 0;
        }
        result = 500 / consumoMedio;
        return result * getValorDiesel();
    }

    public void gerarRelatorio(){
        System.out.println("Placa: "+getPlaca());
        System.out.println("Modelo: "+getModelo());
        System.out.println("Motorista responsável: "+getmotoristaResponsavel());
        System.out.println("Consumo médio: "+calcularConsumoMedio());
        System.out.println("Autonomia: "+calcularAutonomia());
        System.out.println("Custo viagem: "+calcularCustoViagem());
    }

    public double calcularAutonomia(){
        double result = 0;
        result = getCapacidadeTanque() * calcularConsumoMedio();
        return result;
    }

    public void exibirInformacoes(){
         System.out.println("Placa: "+getPlaca());
        System.out.println("Modelo: "+getModelo());
        System.out.println("Motorista responsável: "+getmotoristaResponsavel());
        System.out.println("Consumo médio: "+calcularConsumoMedio());
        System.out.println("Autonomia: "+calcularAutonomia());
        System.out.println("Custo viagem: "+calcularCustoViagem());       
    }

    
}

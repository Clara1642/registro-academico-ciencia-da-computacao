package SistemaViagem;

public abstract class Veiculo {
    private String placa;
    private String modelo;
    private double capacidadeTanque;
    private double quilometragemTotal;

    public Veiculo(String placa, String modelo, double capacidadeTanque, double quilometragemTotal) {
        this.placa = placa;
        this.modelo = modelo;
        this.capacidadeTanque = capacidadeTanque;
        this.quilometragemTotal = quilometragemTotal;
    }

    public String getPlaca() {
        return placa;
    }
    public void setPlaca(String placa) {
        this.placa = placa;
    }
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public double getCapacidadeTanque() {
        return capacidadeTanque;
    }
    public void setCapacidadeTanque(double capacidadeTanque) {
        this.capacidadeTanque = capacidadeTanque;
    }
    public double getQuilometragemTotal() {
        return quilometragemTotal;
    }
    public void setQuilometragemTotal(double quilometragemTotal) {
        this.quilometragemTotal = quilometragemTotal;
    }
    
    public void abastecer(double litros){
        setCapacidadeTanque(getCapacidadeTanque() + litros);
    }

    abstract double calcularAutonomia();
    abstract void exibirInformacoes();
}

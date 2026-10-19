package VeiculosTiposMotor;

public class Moto extends Veiculo {
    private double consumoKmPorlitros;

    public Moto(String marca,String modelo,int velocidadeMaxima,double consumoKmPorlitros){
        super(marca, modelo, velocidadeMaxima);
        this.consumoKmPorlitros = consumoKmPorlitros;
    }

    public double getConsumoKmPorlitros() {
        return consumoKmPorlitros;
    }
    public void setConsumoKmPorlitros(double consumoKmPorlitros) {
        this.consumoKmPorlitros = consumoKmPorlitros;
    }
    
    @Override
    public void mover(){
        System.out.println("A moto esta se movimentado");
    }
    @Override
    public double calcularAutonomia(double litros){
        return getConsumoKmPorlitros() * litros;
    }
}

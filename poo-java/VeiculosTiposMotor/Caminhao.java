package VeiculosTiposMotor;

public class Caminhao extends Veiculo {
    private double consumoKMPorlitros;
     public Caminhao(String marca,String modelo,int velocidadeMaxima,double consumoKMPorlitros){
        super(marca, modelo, velocidadeMaxima);
        this.consumoKMPorlitros = consumoKMPorlitros;

    }

    public double getConsumoKMPorlitros() {
        return consumoKMPorlitros;
    }

    public void setConsumoKMPorlitros(double consumoKMPorlitros) {
        this.consumoKMPorlitros = consumoKMPorlitros;
    }

    @Override
    public void mover(){
        System.out.println("O caminhão esta se movendo");
    }

    @Override
    public double calcularAutonomia(double litros){
        return getConsumoKMPorlitros() * litros;
    }
}

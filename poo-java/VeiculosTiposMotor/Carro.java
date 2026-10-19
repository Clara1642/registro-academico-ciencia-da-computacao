package VeiculosTiposMotor;

public class Carro extends Veiculo {
    private  double consumoKmPorlitros;

    public Carro(String marca,String modelo,int velocidadeMaxima,double consumoKmPorlitros){
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
        System.out.println("O carro está se movendo");
    }

    @Override
    public double calcularAutonomia(double litros){
        return getConsumoKmPorlitros() * litros;
    }
    
}

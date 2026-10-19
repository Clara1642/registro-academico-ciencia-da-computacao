package VeiculosTiposMotor;

public class Main {
    public static void main(String[] args) {
        Carro carro1 = new Carro("Mercedes", "C300", 280, 8);
        Caminhao caminhao1 = new Caminhao("Caio", "Jk", 120, 10);
        Moto moto1= new Moto("Honda", "NB800", 200, 6);

        System.out.println("Dados dos veículos");
        carro1.exibirDados();
        caminhao1.exibirDados();
        moto1.exibirDados();

        System.out.println("=====Autonomia de cada veículo=====");
        System.out.println("Carro: "+carro1.calcularAutonomia(50)+"KM");
        System.out.println("Caminhão: "+caminhao1.calcularAutonomia(50)+"KM" );
        System.out.println("MOto: "+moto1.calcularAutonomia(50)+"KM");
    }
    
}

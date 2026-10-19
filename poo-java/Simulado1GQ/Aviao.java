package Simulado1GQ;

public class Aviao extends Veiculo {
    private boolean voando;

    public Aviao(String marca, boolean estado,double tanque,double consumo,double velocidadeAtual,double litragemDoTaque, double velocidadeMaxima,boolean voando){
        super(marca, estado, tanque, consumo, velocidadeAtual, litragemDoTaque, velocidadeMaxima);
        this.voando = voando;
    }

    public boolean getVoando() {
        return voando;
    }

    public void setVoando(boolean voando) {
        this.voando = voando;
    }

    public void Voar(boolean voando){
        if(getVelocidadeAtual() >= 200){
            System.out.println("Avião apto a voar e pronto para exceder a velocidade máxima. ");
            setVoando(true);
        }
    }

    
    public void Acelerar(){
        if(getVoando() == true){
            setVelocidadeAtual(getVelocidadeAtual() + 20);
        } 
    }

    public void Frear(){
        if(getVoando() == true){
            setVelocidadeAtual(getVelocidadeAtual() - 10);
        }
        if(getVelocidadeAtual() < 200){
            System.out.println("O avião está pousando");
            setVoando(false);
        }
    }

    
    public void Chavear(){
        if(getEstado() == false){
            setEstado(true);
        }
    
        else if(getVelocidadeAtual() == 0){
            setEstado(false);
        }

    }

     public void Corrida(double distancia){
        double distanciaConsumo;
        int cont = 0;
        distanciaConsumo = getConsumo() * cont;


        while(distanciaConsumo < distancia && getTanque() > 0){
            setTanque(getTanque() - 1);
            cont++;
            distanciaConsumo = getConsumo() * cont;
        }
        if(distanciaConsumo >= distancia){
            System.out.println("Distancia percorrida!!");
            setLitragemDoTaque(getLitragemDoTaque() - cont);
        }
        else if(distanciaConsumo < distancia){
            setVelocidadeAtual(0);
            setLitragemDoTaque(0);
            distancia = distancia - distanciaConsumo;
            System.out.println(" Distância maior que a litragem do avião, haverá pouso de emergencial.");
        }
    }
}

package Exercicio4;

public class Velocidade {
    Viagem v;

    public Velocidade(Viagem v){
        this.v = v;
    }

    public double Velmedia(){
        return ((double)v.distancia / v.tempo);
    }
    
}

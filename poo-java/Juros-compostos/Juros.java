package Exercicio6;

public class Juros {
    Investimento I;

    public Juros(Investimento I){
        this.I = I;
    }

    public double Calcujuros(){
        return I.capital * Math.pow(1 + (I.taxa/100),I.tempo);
    }
    
}

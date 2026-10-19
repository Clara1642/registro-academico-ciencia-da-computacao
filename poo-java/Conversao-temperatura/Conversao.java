package Exercicio3;

public class Conversao {
    Temperatura c1;

    public Conversao(Temperatura c1){
        this.c1 = c1;
    }

    public double Fahrenheit(){
        return (c1.celsius * 1.8 + 32);
    }
    public double Kelvin(){
        return (c1.celsius + 273.15);
    }
    
}

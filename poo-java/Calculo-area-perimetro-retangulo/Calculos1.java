package Exercicio1;

public class Calculos1 {
    double lado1;
    double lado2;
    double lado3;
    double lado4;

    Retangulo1 r;

    public Calculos1(double lado1,double lado2,double lado3,double lado4,Retangulo1 r){
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
        this.lado4 = lado4;
        this.r = r;
    }

    public double area(){
        return r.altura * r.largura;
    }

    public double perimetro(){
        return lado1 + lado2 + lado3 + lado4;

    }












}


    

    


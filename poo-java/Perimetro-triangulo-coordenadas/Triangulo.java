package Exercicio7;

public class Triangulo {
    Ponto pp1;
    Ponto pp2;
    Ponto pp3;

    public Triangulo(Ponto pp1,Ponto pp2,Ponto pp3){
        this.pp1 = pp1;
        this.pp2 = pp2;
        this.pp3 = pp3;
    }

    public double lado1(){
        return Math.sqrt((Math.pow((pp2.x - pp1.x),2) + Math.pow((pp2.y - pp1.y),2)));
    }

    public double lado2(){
        return Math.sqrt((Math.pow((pp3.x - pp1.x),2) + Math.pow((pp3.y - pp1.y),2)));
    }

    public double lado3(){
        return Math.sqrt((Math.pow((pp2.x - pp3.x),2) + Math.pow((pp2.y - pp3.y),2)));
    }
    
    public double perimetro(){
        return lado1() + lado2() + lado3();
    }
}

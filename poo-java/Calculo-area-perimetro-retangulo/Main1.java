package Exercicio1;
import java.util.Scanner;
public class Main1 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o valor do lado1: ");
        double lado1 = sc.nextDouble();

        System.out.println("Informe o valor do lado2: ");
        double lado2 = sc.nextDouble();

        System.out.println("Informe o valor do lado3(largura): ");
        double lado3 = sc.nextDouble();

        System.out.println("Informe o valor do lado4(altura): ");
        double lado4 = sc.nextDouble();

        Retangulo1 r = new Retangulo1(lado3,lado4);
        Calculos1 c = new Calculos1(lado1,lado2,lado3,lado4,r);

        System.out.println("O valor da área é: " +c.area());
        System.out.println("O valor do perímetro é: "+c.perimetro());

        sc.close();
    }
    
}

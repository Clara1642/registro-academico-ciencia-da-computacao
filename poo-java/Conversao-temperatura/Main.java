package Exercicio3;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o valor da temperatura: ");
        double C = sc.nextDouble();

        Temperatura c1 = new Temperatura(C);
        Conversao c2 = new Conversao(c1);

        System.out.println("O resultado da conversão de celsius para fahrenheit é: " + c2.Fahrenheit());
        System.out.println("O resultado da conversão de celsius para kelvin é: " + c2.Kelvin());

        sc.close();
    }
    
}

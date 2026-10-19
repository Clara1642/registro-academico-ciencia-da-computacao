package Exercicio6;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o capital: ");
        double capital = sc.nextDouble();

        System.out.println("Informe a taxa: ");
        double taxa = sc.nextDouble();

        System.out.println("Informe o tempo(anos): ");
        double tempo =sc.nextDouble();

        Investimento I = new Investimento(capital, taxa, tempo);
        Juros J = new Juros(I);

        System.out.println("Mutante após juros: " +J.Calcujuros());

        sc.close();

    }
    
}

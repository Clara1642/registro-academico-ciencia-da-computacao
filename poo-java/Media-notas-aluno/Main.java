package Exercicio2;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o valor da nota1: ");
        double nota1 = sc.nextDouble();

        System.out.println("Informe o valor da nota2: ");
        double nota2 = sc.nextDouble();

        System.out.println("Informe o valor da nota3: ");
        double nota3 = sc.nextDouble();

        Aluno a = new Aluno(nota1,nota2,nota3);
        Media m = new Media(a);
         
        if(m.Calculomedia() >= 6){
            System.out.println("Aprovado! ");
        }
        else{
            System.out.println("Reprovado! ");
        }

        sc.close();
    }
    
}

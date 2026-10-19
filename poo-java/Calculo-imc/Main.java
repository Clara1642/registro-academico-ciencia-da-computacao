package Exercicio5;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o seu peso: ");
        double peso = sc.nextDouble();

        System.out.println("Informe sua altura: ");
        double altura = sc.nextDouble();

        Pessoa p = new Pessoa(peso,altura);
        Imc I = new Imc(p);


        if(I.Calimc() < 18.5){
            System.out.println("Abaixo do peso! ");
        }
        if(I.Calimc() >= 18.5 && I.Calimc() <=24.99){
            System.out.println("Peso normal!");
        }
        if(I.Calimc() >= 25.0 && I.Calimc() <= 29.99){
            System.out.println("Sobrepeso!");
        }
        if(I.Calimc() >= 30.0 && I.Calimc() <= 34.99){
            System.out.println("Obesidade grau 1! ");
        }
        if(I.Calimc() >= 35.0 && I.Calimc() <= 39.99){
            System.out.println("Obesidade grau 2! ");
        }
        if(I.Calimc() > 40.0){
             System.out.println("Obesidade grau 3(mórbida)! ");
        }

        sc.close();

    }
    
}

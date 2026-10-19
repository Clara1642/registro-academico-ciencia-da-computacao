package ExercicioRevisao;

import java.util.Scanner;

public class Funcao5 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe um número inteiro: ");
        int num = scanner.nextInt();

        int resultado1 = fatorial1(num);
        int resultado2 = fatorial2(num);
        System.out.println("Solução iterativa: " +resultado1);
        System.out.println("Solução recursiva: " +resultado2);

        scanner.close();
    }

    public static int fatorial1(int num1){
        int result1 = 1;
        for(int i = 1; i <= num1; i++){
            result1 *= i;
            
        }
        return result1;
    }

    public static int fatorial2(int num2){
        if(num2 == 1){
            return 1;
        }
        return num2 * fatorial2(num2 - 1);
    }
}

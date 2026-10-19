package ExercicioRevisao;

import java.util.Scanner;

public class Funcao2 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe o numero: " );
        int valor = scanner.nextInt();

        boolean resultado = verifica(valor);
        if(resultado == true){
            System.out.println("O numero é primo! ");
        }
        else{
            System.out.println("O numero não é primo! ");
        }
        scanner.close();
    }

    public static boolean verifica(int num){
        int cont = 0;
        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                cont++;
            }
        }
        if(cont == 2){
            return true;
        }
        else{
            return false;
        } 
    }   
}

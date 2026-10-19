package ExercicioRevisao;
import java.util.Scanner;
public class Funcao3 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Informe o primeiro número: ");
        int valor1 = scanner.nextInt();
        System.out.println("Informe o segundo número: ");
        int valor2 = scanner.nextInt();

    intervalo(valor1,valor2);

    scanner.close();
    }

    public static void intervalo(int num1, int num2){
        int cont = 0;
        for(int i = num1 + 1; i < num2; i++){
            for(int j = 1; j <= i; j++){
                if(i % j == 0){
                    cont++;
                }
            }
            if(cont == 2){
                System.out.println(i);
            }
            cont = 0;
            

        }
    }
}

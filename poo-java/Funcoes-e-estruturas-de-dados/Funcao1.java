package ExercicioRevisao;
import java.util.Scanner;
public class Funcao1 {
   public static void main(String[] args){

    int[] vet = new int[9]; 

    Scanner scanner = new Scanner(System.in);
    for(int i = 0; i < 9; i++){
        System.out.println("Informe o valor: ");
        vet[i] = scanner.nextInt();
    }

    menornumero(vet);

    scanner.close();
   } 

   public static void menornumero(int vet[]){
    int menor = vet[0];
    for(int i = 0; i < 9; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }

    System.out.println("O menor valor do vetor: " +menor);

   }
}

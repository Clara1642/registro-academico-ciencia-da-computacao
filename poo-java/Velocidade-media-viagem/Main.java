package Exercicio4;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe a distancia(em km): ");
        int distancia = sc.nextInt();

        System.out.println("Informe o tempo(em horas): ");
        int tempo = sc.nextInt();

        Viagem v = new Viagem(distancia,tempo);
        Velocidade v1 = new Velocidade(v);

        System.out.println("A velocidade média: " +v1.Velmedia() +"km/h");

        sc.close();

    }
    
}

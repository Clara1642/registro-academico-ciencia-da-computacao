package Exercicio9;
import java.util.Random;
public class Main {
    public static void main(String[] args) {

        Random gerador = new Random();
        int numero = gerador.nextInt(0,100);
        Investimento i1 = new Investimento("Caixa","12345678",100,"baixo");
        Funcionario f1 = new Funcionario("Clara",21,i1,"programador");

        System.out.println("Nome: "+f1.getNome());
        System.out.println("Idade: "+f1.getIdade());
        System.out.println("Agencia: "+f1.getConta().getAgencia());
        System.out.println("Numero da conta: "+f1.getConta().getNumConta());
        System.out.println("Saldo atual: "+f1.getConta().getSaldo());
        System.out.println("Cargo: "+f1.getCargo());

        i1.Investir(numero,0);
        i1.Investir(numero);
        f1.InvEspecial(i1, numero);
        
        System.out.println("Saldo após possiveis investimentos: "+f1.getConta().getSaldo());
        
    }    
}

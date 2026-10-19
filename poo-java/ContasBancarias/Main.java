package ContasBancarias;

public class Main {
    public static void main(String[] args){
        ContaCorrente c1 = new ContaCorrente("1234567891-0", "Carlos", 2000, 2500);
        ContaPoupanca p1 = new ContaPoupanca("1098765432-1", "Ivone", 500, 0.5);
        

        System.out.println("===== Conta corrente =====");
        c1.exibirExtrato();

        System.out.println("=== Extrato bancário pós deposito ===");
        c1.depositar(100);
        c1.exibirExtrato();

        System.out.println("=== Extrato bancário pós saque ===");
        c1.sacar(50);
        c1.exibirExtrato();

        

        System.out.println("===== Conta poupanca =====");
        p1.exibirExtrato();

        System.out.println("=== Extrato bancário pós deposito ===");
        p1.depositar(100);
        p1.exibirExtrato();

        System.out.println("=== Extrato bancário pós saque ===");
        p1.sacar(50);
        p1.exibirExtrato();

  
      
    }
}

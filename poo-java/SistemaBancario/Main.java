package SistemaBancario;

public class Main {
    public static void main(String[] args){
        GerenciadorContas g = new GerenciadorContas();

        ContaCorrente c1 = new ContaCorrente(500, 1234, "1234567-8", "Marcos", "0001", 1000);
        ContaCorrente c2 = new ContaCorrente(300, 5678, "9876543-2", "Paula", "0002", 2500);

        g.cadastrarConta(c1);
        g.cadastrarConta(c2);

        g.listarContas();

        c1.calcularTarifa();
        c1.realizarTransacao(1200);
        c1.consultarSaldo();
    }
}

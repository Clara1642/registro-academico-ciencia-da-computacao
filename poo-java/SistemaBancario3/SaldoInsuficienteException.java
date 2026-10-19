package SistemaBancario3;

public class SaldoInsuficienteException extends Exception {
    public SaldoInsuficienteException(){
        super("Saldo insuficiente");
    }
}

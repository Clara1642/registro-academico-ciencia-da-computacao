package SistemaBancario3;

public interface Transacionavel {
    void realizarTransferencia(double valor) throws SaldoInsuficienteException;
    void consultarExtrato();

}

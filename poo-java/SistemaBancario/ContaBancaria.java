package SistemaBancario;

public abstract class ContaBancaria {
    private String numeroConta;
    private String titular;
    private String agencia;
    private double saldo;

    public ContaBancaria(String numeroConta,String titular,String agencia,double saldo){
        this.numeroConta = numeroConta;
        this.titular = titular;
        this.agencia = agencia;
        this.saldo = saldo;
    }

    public String getNumeroConta() {
        return numeroConta;
    }
    public void setNumeroConta(String numeroConta) {
        this.numeroConta = numeroConta;
    }
    public String getTitular() {
        return titular;
    }
    public void setTitular(String titular) {
        this.titular = titular;
    }
    public String getAgencia() {
        return agencia;
    }
    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }
    public double getSaldo() {
        return saldo;
    }
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    } 
    
    abstract void calcularTarifa();
}

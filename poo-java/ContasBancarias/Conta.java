package ContasBancarias;

public abstract class Conta {
    private String numeroDeConta;
    private String titular;
    private double saldo;

    
    public Conta(String numeroDeConta,String titular,double saldo){
        this.numeroDeConta = numeroDeConta;
        this.titular = titular;
        this.saldo = saldo;
    }

    public String getNumeroDeConta() {
        return numeroDeConta;
    }

    public void setNumeroDeConta(String numeroDeConta) {
        this.numeroDeConta = numeroDeConta;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public void depositar(double valor){
        setSaldo(getSaldo() + valor);
    }

    public abstract void sacar(double valor);

    public void exibirExtrato(){
        System.out.println("Numero da conta: "+getNumeroDeConta());
        System.out.println("Titular: "+getTitular());
        System.out.println("Saldo: "+getSaldo()+"\n");
    }
    
}

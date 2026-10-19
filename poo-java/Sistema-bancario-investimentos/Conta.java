package Exercicio9;

public class Conta {
    private String agencia;
    private String numConta;
    private double saldo;

    public Conta(String agencia,String numConta, double saldo){
        this.agencia = agencia;
        this.numConta = numConta;
        this.saldo = saldo;
    }

    public String getAgencia() {
        return agencia;
    }

    public void setAgencia(String agencia) {
        this.agencia = agencia;
    }

    public String getNumConta() {
        return numConta;
    }

    public void setNumConta(String numConta) {
        this.numConta = numConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public void Saque(double valor){
        if(getSaldo() < valor ){
            System.out.println("Valor maior que o saldo!");
        }
        else{
            setSaldo(getSaldo() - valor);
            System.out.println("Saque realizado!");
            System.out.println("Saldo atual: "+getSaldo());
        }

    }
    public void Deposito(double adicionar){
        setSaldo(getSaldo() + adicionar);
        System.out.println("Valor depositado!");
        System.out.println("Saldo atual: "+getSaldo());
    }

    public void Deposito(double adicionar,double imposto){
        setSaldo(getSaldo() + adicionar);
        setSaldo(getSaldo() - getSaldo() * imposto);

    }
}
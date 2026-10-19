package SistemaBancario;

public class ContaCorrente extends ContaBancaria implements Efetuar {
    private double limite;
    private int numeroChequeEspecial;

    public ContaCorrente(double limite,int numeroChequeEspecial,String numeroConta,String titular,String agencia,double saldo){
        super(numeroConta, titular, agencia, saldo);
        this.limite = limite;
        this.numeroChequeEspecial = numeroChequeEspecial;
    }

    public double getLimite() {
        return limite;
    }
    public void setLimite(double limite) {
        this.limite = limite;
    }
    public int getNumeroChequeEspecial() {
        return numeroChequeEspecial;
    }
    public void setNumeroChequeEspecial(int numeroChequeEspecial) {
        this.numeroChequeEspecial = numeroChequeEspecial;
    }

    public void calcularTarifa(){
        System.out.println("Básica || R$ 15.00");
        System.out.println("Plus || R$ 30.00");
        System.out.println("Premium || R$ 50.00");
    }

    public void realizarTransacao(double valor){
        if(getSaldo() + getLimite() >= valor){
            setSaldo(getSaldo() - valor);
            System.out.println("Transação efetuada com sucesso!");
        }
        else{
            System.out.println("Saldo + limite Insuficiente para realizar transação!");
        }
    }

    public void consultarSaldo(){
        double saldoTotal = 0;
        saldoTotal = getSaldo() + getLimite();
        System.out.println("O saldo atual somado ao limite disponivel: "+saldoTotal);
    }
    
}

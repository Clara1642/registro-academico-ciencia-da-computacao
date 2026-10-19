package ContasBancarias;

public class ContaCorrente extends Conta {
    private double limiteAdicional;


    public ContaCorrente(String numeroDeConta,String titular,double saldo,double limiteAdicional){
        super(numeroDeConta, titular, saldo);
        this.limiteAdicional = limiteAdicional;

    }

    public double getLimiteAdicional() {
        return limiteAdicional;
    }

    public void setLimiteAdicional(double limiteAdicional) {
        this.limiteAdicional = limiteAdicional;
    }

    public void sacar(double valor){
        if(getSaldo() + getLimiteAdicional() >= valor){
            setSaldo(getSaldo() - valor);
        }
        else{
            System.out.println("Não foi possivel sacar!");
        }
    }
}

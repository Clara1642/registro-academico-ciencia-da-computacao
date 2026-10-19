package ContasBancarias;

public class ContaPoupanca extends Conta {
    private double taxaRendimento;

    public ContaPoupanca(String numeroDeConta,String titular,double saldo,double taxaRendimento){
        super(numeroDeConta, titular, saldo);
        this.taxaRendimento = taxaRendimento;
    }

    public double getTaxaRendimento() {
        return taxaRendimento;
    }

    public void setTaxaRendimento(double taxaRendimento) {
        this.taxaRendimento = taxaRendimento;
    }

    public void sacar(double valor){
        if(getSaldo() >= valor){
            setSaldo(getSaldo() - valor);
        }
        else{
            System.out.println("Saldo insuficiente!");
        }
    }

    public void renderJuros(){
        setSaldo((getSaldo() * getTaxaRendimento()) + getSaldo());
    }
}

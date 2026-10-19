package SistemaBancario3;

public class ContaPoupanca extends Conta implements Transacionavel {
    private double taxaRendimento;
    private double[] historicoTransacoes;
    private int indiceHistorico;


    public ContaPoupanca(String titular, String numeroConta, String agencia, double saldo, double taxaRendimento,
            double[] historicoTransacoes, int indiceHistorico) {
        super(titular, numeroConta, agencia, saldo);
        this.taxaRendimento = taxaRendimento;
        this.historicoTransacoes = historicoTransacoes;
        this.indiceHistorico = indiceHistorico;
    }


    public double getTaxaRendimento() {
        return taxaRendimento;
    }
    public void setTaxaRendimento(double taxaRendimento) {
        this.taxaRendimento = taxaRendimento;
    }
    public double[] getHistoricoTransacoes() {
        return historicoTransacoes;
    }
    public void setHistoricoTransacoes(double[] historicoTransacoes) {
        this.historicoTransacoes = historicoTransacoes;
    }
    public int getIndiceHistorico() {
        return indiceHistorico;
    }
    public void setIndiceHistorico(int indiceHistorico) {
        this.indiceHistorico = indiceHistorico;
    }

    public double calcularRendimento(){
        double calcularRendimento = 0;
        calcularRendimento = getSaldo() * getTaxaRendimento();
        return calcularRendimento;
    }
    
    public void realizarTransferencia(double valor) throws SaldoInsuficienteException{
        double taxa = 0;
        taxa = valor * 0.01;
        if(getSaldo() < valor + taxa){
            throw new SaldoInsuficienteException();
        }
        setSaldo(getSaldo() - valor);
        for(int i = 0;i < getHistoricoTransacoes().length;i++){
            if(getHistoricoTransacoes()[i] == 0.0){
                getHistoricoTransacoes()[i] = - valor;
                break;
            }
        }
    }

    public void consultarExtrato(){
        System.out.println("Movimentações:");
        for(int i = 0; i < getHistoricoTransacoes().length;i++){
            System.out.printf("%d: %f\n\n",i,getHistoricoTransacoes()[i]);
        }

        System.out.println("Saldo atual: "+getSaldo());
    }
    
    public void depositar(double valor){
        setSaldo(getSaldo() + valor);
        for(int i = 0; i < getHistoricoTransacoes().length;i++){
            if(getHistoricoTransacoes()[i] == 0.0){
                getHistoricoTransacoes()[i] = valor;
                break;
            }
        }
    }

    public void aplicarRendimento(){
        double calcular = 0;
        calcular = calcularRendimento();
        setSaldo(getSaldo() + calcular);
        System.out.println("Valor creditado: "+calcular);
    }
}

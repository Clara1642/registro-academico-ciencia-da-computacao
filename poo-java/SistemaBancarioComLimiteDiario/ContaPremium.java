package SistemaBancarioComLimiteDiario;

public class ContaPremium extends Conta implements Operavel {
    private double cashbackAcumulado;
    private boolean ativa;

    public ContaPremium(String numero, String titular, double saldo, double limiteDiarioSaque, double totalSacadoNoDia,
            double cashbackAcumulado, boolean ativa) {
        super(numero, titular, saldo, limiteDiarioSaque, totalSacadoNoDia);
        this.cashbackAcumulado = 0;
        this.ativa = true;
    }

    public double getCashbackAcumulado() {
        return cashbackAcumulado;
    }
    public void setCashbackAcumulado(double cashbackAcumulado) {
        this.cashbackAcumulado = cashbackAcumulado;
    }
    public boolean getAtiva() {
        return ativa;
    }
    public void setAtiva(boolean ativa) {
        this.ativa = ativa;
    }

    
    public void depositar(double valor) throws ValorInvalidoException{
        if(valor <= 0){
            throw new ValorInvalidoException();
        }
        else{
            setSaldo(getSaldo() + valor);
        }
    }

    public void sacar(double valor) throws ValorInvalidoException,LimiteDiarioException,SaldoInsuficienteException{
        if(valor <= 0){
            throw new ValorInvalidoException();
        }
        else if(getSaldo() < valor){
            throw new SaldoInsuficienteException();
        }
        else if(getTotalSacadoNoDia() + valor > getLimiteDiarioSaque()){
            throw new LimiteDiarioException();
        }
        else{
            setSaldo(getSaldo() - valor);
            setTotalSacadoNoDia(getTotalSacadoNoDia() + valor);
            setCashbackAcumulado(getCashbackAcumulado() + (valor * 0.01));
        }    
    }

    public double calcularTarifaMensal(){
        double tarifaMensal = 0;
        if(getSaldo() < 0){
            setAtiva(false);
        }
        else if(getSaldo() < 1000){
            tarifaMensal = 12.0;
        }
        else if(getSaldo() > 1000){
            tarifaMensal = 0.0;
        }
        return tarifaMensal;
    }
}

package SistemaDeFuncionarios;

public class Vendedor extends Funcionario {
    private double totalVendas;
    private double comissaoPercentual;

    
    public Vendedor(String nome,String cpf,double salarioBase,double totalVendas,double comissaoPercentual){
        super(nome, cpf, salarioBase);
        this.totalVendas = totalVendas;
        this.comissaoPercentual = comissaoPercentual;
    }
    

    public double getTotalVendas() {
        return totalVendas;
    }

    public void setTotalVendas(double totalVendas) {
        this.totalVendas = totalVendas;
    }

    public double getComissaoPercentual() {
        return comissaoPercentual;
    }

    public void setComissaoPercentual(double comissaoPercentual) {
        this.comissaoPercentual = comissaoPercentual;
    }
    @Override
    public void calcularSalario(){
        setSalarioBase(getSalarioBase() + getTotalVendas() * getComissaoPercentual());
    }
}

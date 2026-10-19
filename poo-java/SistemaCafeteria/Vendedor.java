package SistemaCafeteria;

public class Vendedor extends Funcionario implements ControleVendas {
    private int[] quantidadeVendida = new int[7];
    private double[] faturamento = new double[7];
    private int totalProdutoVendidos;
    private double totalFaturamento;

    public Vendedor(String nome,String matricula,String cargo,double salarioBase,int totalProdutoVendidos){
        super(nome, matricula, cargo, salarioBase);
        this.totalProdutoVendidos = totalProdutoVendidos;

    }


    public int[] getQuantidadeVendida() {
        return quantidadeVendida;
    }
    public void setQuantidadeVendida(int[] quantidadeVendida) {
        this.quantidadeVendida = quantidadeVendida;
    }
    public double[] getFaturamento() {
        return faturamento;
    }
    public void setFaturamento(double[] faturamento) {
        this.faturamento = faturamento;
    }
    public int getTotalProdutoVendidos() {
        return totalProdutoVendidos;
    }
    public void setTotalProdutoVendidos(int totalProdutoVendidos) {
        this.totalProdutoVendidos = totalProdutoVendidos;
    }
    public double getTotalFaturamento() {
        return totalFaturamento;
    }
    public void setTotalFaturamento(double totalFaturamento) {
        this.totalFaturamento = totalFaturamento;
    }

    public void registrarVenda(int dia,int quantidade,double valorUnitario){
        if(quantidade < 0 || valorUnitario < 0){
            System.err.println("Dados inválidos");
            return;
        }
            getQuantidadeVendida()[dia] = quantidade;
            getFaturamento()[dia] = quantidade * valorUnitario;
    }

    public void calcularfaturamento(){
        for(int i = 0;i < 7;i++){
            setTotalProdutoVendidos(getQuantidadeVendida()[i] + getTotalProdutoVendidos());
            setTotalFaturamento(getFaturamento()[i] + getTotalFaturamento());
        }
    }

    public int melhorDiaDeVendas(){
        double j = getFaturamento()[0];
        int retorno = 0;
        for(int i = 0;i < 7;i++){
            if(j < getFaturamento()[i]){
                j = getFaturamento()[i];
                retorno = i;
            }
        }
        return retorno;
    }

    public double calcularSalariofinal(){

        if(getCargo().equalsIgnoreCase("Júnior")){
            setSalarioBase(getSalarioBase() + (getSalarioBase() * 0.2));
            return getSalarioBase();
        }
        if(getCargo().equalsIgnoreCase("Pleno")){
            setSalarioBase(getSalarioBase() + (getSalarioBase() * 0.5));
            return getSalarioBase();
        }
        if(getCargo().equalsIgnoreCase("Senior")){
            setSalarioBase(getSalarioBase() + (getSalarioBase() * 0.8));
            return getSalarioBase();
        }
        return 0;
    }
    
}

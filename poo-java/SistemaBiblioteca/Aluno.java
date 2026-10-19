package SistemaBiblioteca;

public class Aluno extends Pessoa implements ControleEmprestimo {
    private int[] emprestimoPorDia = new int[7];
    private int totalEmprestimos;
    private int livrosAtrasados;
    private double valorMulta;

    public Aluno(String nome,String matricula,String tipo,int livrosAtrasados){
        super(nome, matricula, tipo);
        this.livrosAtrasados = livrosAtrasados;
    }

     public int[] getEmprestimoPorDia() {
        return emprestimoPorDia;
    }

    public void setEmprestimoPorDia(int[] emprestimoPorDia) {
        this.emprestimoPorDia = emprestimoPorDia;
    }

    public int getTotalEmprestimos() {
        return totalEmprestimos;
    }
    public void setTotalEmprestimos(int totalEmprestimos) {
        this.totalEmprestimos = totalEmprestimos;
    }
    public int getLivrosAtrasados() {
        return livrosAtrasados;
    }
    public void setLivrosAtrasados(int livrosAtrasados) {
        this.livrosAtrasados = livrosAtrasados;
    }
    public double getValorMulta() {
        return valorMulta;
    }
    public void setValorMulta(double valorMulta) {
        this.valorMulta = valorMulta;
    }
    
    public void registrarEmprestimo(int dia,int quantidade){
        if(quantidade < 0){
            System.out.println("Dados inválidos");
            return;
        }
        else{
            getEmprestimoPorDia()[dia] = quantidade;
        }
    }

    public int calcularTotalEmprestimo(){
        for(int i = 0; i < getEmprestimoPorDia().length;i++){
            setTotalEmprestimos(getEmprestimoPorDia()[i] + getTotalEmprestimos());
        }
    
        return getTotalEmprestimos();
    }


    public int diaMaisMovimentado(){
        int j = getEmprestimoPorDia()[0];
        int retorno = 0;
        for(int i = 0;i < 7;i++){
            if(j < getEmprestimoPorDia()[i]){
                j = getEmprestimoPorDia()[i];
                retorno = i;
            }
        }
        return retorno;
    }

    public double calcularMulta(){
        double multa = 2.50;
        if(getLivrosAtrasados() > 0){
            setValorMulta(getLivrosAtrasados() * multa);
        }
        return getValorMulta();
    }
}

package SistemaBiblioteca1;

public class Livro extends ItemBiblioteca implements Efetuar {
    private int paginas;
    private int edicao;
    private String[] historicoEmprestimo = new String[10];
    private int totalEmprestimos = 0;
    
    public Livro(String codigo, String titulo, String autor, int paginas, int edicao) {
        super(codigo, titulo, autor);
        this.paginas = paginas;
        this.edicao = edicao;
    }


    public int getPaginas() {
        return paginas;
    }
    public void setPaginas(int paginas) {
        this.paginas = paginas;
    }
    public int getEdicao() {
        return edicao;
    }
    public void setEdicao(int edicao) {
        this.edicao = edicao;
    }
    public String[] getHistoricoEmprestimo() {
        return historicoEmprestimo;
    }
    public void setHistoricoEmprestimo(String[] historicoEmprestimo) {
        this.historicoEmprestimo = historicoEmprestimo;
    }
    public int getTotalEmprestimos() {
        return totalEmprestimos;
    }
    public void setTotalEmprestimos(int totalEmprestimos) {
        this.totalEmprestimos = totalEmprestimos;
    }    

    
    public void calcularMulta(int diasAtraso,String categoria){
        if(categoria.equalsIgnoreCase("Comum")){
            System.out.println("Multa por atraso: "+diasAtraso * 0.5);
        }
        if(categoria.equalsIgnoreCase("Referencia")){
            System.out.println("Multa por atraso: "+diasAtraso * 1.0);
        }
        if(categoria.equalsIgnoreCase("Raro")){
            System.out.println("Multa por atraso: "+diasAtraso * 3.0);
        }
    }

    public void realizarEmprestimo(String nomeUsuario){
        if(getDisponivel() == true){
            if(getTotalEmprestimos() < 10){
                getHistoricoEmprestimo()[totalEmprestimos] = nomeUsuario;
                setTotalEmprestimos(getTotalEmprestimos() + 1);
                setDisponivel(false);
                System.out.println("Emprestimo do livro efetuado com sucesso!!");
            }
            else{
                System.out.println("Historico de emprestimos cheio!!");
            }
        }
        else{
            System.out.println("Livro indisponivel!");
        }

    }
    public void devolverItem(){
        setDisponivel(true);
        System.out.println("Titulo: "+getTitulo());
        System.out.println("Quantidade de vezes que foi emprestado: "+getTotalEmprestimos());
    }  

}

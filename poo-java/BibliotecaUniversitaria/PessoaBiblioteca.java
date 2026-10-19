package BibliotecaUniversitaria;

public abstract class PessoaBiblioteca {
    private String matricula;
    private String nome;
    private String categoria;
    private int limiteEmprestimo;

    public PessoaBiblioteca(String matricula,String nome,String categoria,int limiteEmprestimo){
        this.matricula = matricula;
        this.nome = nome;
        this.categoria = categoria;
        this.limiteEmprestimo = limiteEmprestimo;
    }

    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getCategoria() {
        return categoria;
    }
    public void setCategoria(String categoria) {
        this.categoria = categoria;
    }
    public int getLimiteEmprestimo() {
        return limiteEmprestimo;
    }
    public void setLimiteEmprestimo(int limiteEmprestimo) {
        this.limiteEmprestimo = limiteEmprestimo;
    }

    abstract int calcularPrazoPadrao();
    
}

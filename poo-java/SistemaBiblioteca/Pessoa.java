package SistemaBiblioteca;

public abstract class Pessoa {
    private String nome;
    private String matricula;
    private String tipo;

    public Pessoa(String nome,String matricula,String tipo){
        this.nome = nome;
        this.matricula = matricula;
        this.tipo = tipo;
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public String getTipo() {
        return tipo;
    }
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    abstract double calcularMulta();
}

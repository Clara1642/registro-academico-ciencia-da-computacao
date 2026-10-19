package CampeonatoNatacao;

public abstract class Atleta {
    private String nome;
    private String matricula;
    private String modalidade;
    private double pontuacaoTotal = 0;

    
    public Atleta(String nome, String matricula, String modalidade) {
        this.nome = nome;
        this.matricula = matricula;
        this.modalidade = modalidade;
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
    public String getModalidade() {
        return modalidade;
    }
    public void setModalidade(String modalidade) {
        this.modalidade = modalidade;
    }
    public double getPontuacaoTotal() {
        return pontuacaoTotal;
    }
    public void setPontuacaoTotal(double pontuacaoTotal) {
        this.pontuacaoTotal = pontuacaoTotal;
    }

    abstract void calcularCategoria();
}

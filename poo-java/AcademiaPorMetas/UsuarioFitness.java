package AcademiaPorMetas;

public abstract class UsuarioFitness {
    private String nome;
    private String senha;
    private String plano;
    private int metaSemanal;
   


    public UsuarioFitness(String nome,String senha,String plano,int metaSemanal){
        this.nome = nome;
        this.senha = senha;
        this.plano = plano;
        this.metaSemanal = metaSemanal;
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getSenha() {
        return senha;
    }
    public void setSenha(String senha) {
        this.senha = senha;
    }
    public String getPlano() {
        return plano;
    }
    public void setPlano(String plano) {
        this.plano = plano;
    }
    public int getMetaSemanal() {
        return metaSemanal;
    }
    public void setMetaSemanal(int metaSemanal) {
        this.metaSemanal = metaSemanal;
    }


    abstract double calcularCobranca();
    
}

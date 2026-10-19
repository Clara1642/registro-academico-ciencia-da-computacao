package BoletimEscolar;

public abstract class Turma {
    private String nomeTurma;
    private String[] nomeAlunos;
    private double[][] notas;

    public Turma(String nomeTurma,String[] nomeAlunos,double[][] notas ){
        this.nomeTurma = nomeTurma;
        this.nomeAlunos = nomeAlunos;
        this.notas = notas;
    }
    public String getNomeTurma() {
        return nomeTurma;
    }
    public void setNomeTurma(String nomeTurma) {
        this.nomeTurma = nomeTurma;
    }
    public String[] getNomeAlunos() {
        return nomeAlunos;
    }
    public void setNomeAlunos(String[] nomeAlunos) {
        this.nomeAlunos = nomeAlunos;
    }
    public double[][] getNotas() {
        return notas;
    }
    public void setNotas(double[][] notas) {
        this.notas = notas;
    }

    public double mediaAluno(int i){
        double soma = 0,media = 0;
        for(int j = 0; j < getNotas()[i].length;j++){
            soma += getNotas()[i][j];
        }
        media = soma / getNotas()[i].length;
        return media;
    }

    public double mediaDisciplina(int j){
        double soma = 0,media = 0;
        for(int i = 0; i < getNotas().length;i++){
            soma += getNotas()[i][j];
        }
        media = soma / getNotas().length;
        return media;
    }

    public void exibirMatriz(){
        for(int i = 0; i < getNotas().length;i++){
            for(int j = 0; j < getNotas()[i].length;j++){
                System.out.println(getNotas()[i][j]);
            }
        }
    }

    public abstract void avaliarTurma();

    
}

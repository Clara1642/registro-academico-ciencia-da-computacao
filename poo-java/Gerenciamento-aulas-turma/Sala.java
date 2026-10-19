package Exercicio8;

public class Sala {
    private String nome;
    private boolean ocupada;
    private Aluno[] turma = new Aluno[10];
    private int diadeAula;


    public Sala(String nome,boolean ocupada,Aluno[] turma,int diadeAula){
        this.nome = nome;
        this.ocupada = ocupada;
        this.turma = turma;
        this.diadeAula = diadeAula;   
    }

    public String getNome(){
        return nome;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public boolean getOcupada(){
        return ocupada;
    }

    public void setOcupada(boolean ocupada){
        this.ocupada = ocupada;
    }

    public Aluno[] getTurma(){
        return turma;
    }

    public void setTurma(Aluno[] turma){
        this.turma = turma;
    }

    public int getdiadeAula(){
        return diadeAula;
    }

    public void setdiadeAula(int diadeAula){
        this.diadeAula = diadeAula;
    }

    public boolean Alternar(){
        if(getOcupada() == false){
            setOcupada(true);
            return getOcupada();
        }
        else{
            setOcupada(false);
            return getOcupada();
            
        }
    }
}

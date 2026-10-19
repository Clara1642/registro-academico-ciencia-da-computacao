package BoletimEscolar;

public class Main {
    public static void main(String[] args){
       String[] nomeAlunoFundamental = {"João","Carlos","Carol"};
       double[][] notasF = {{7,9.4,7.9},{9.2,8.4,10},{6.5,4.3,3.3}};
       String[] nomeAlunoUniversitario ={"Clara","Flávio","Gustavo"};
       double[][] notasU = {{8,8,7},{9,7,5.5},{10,5.3,8}};

       TurmaFundamental tf = new TurmaFundamental("Prof. Roberto", nomeAlunoFundamental, notasF);
       TurmaUniversitaria tu = new TurmaUniversitaria("Prof. Ana eliza", nomeAlunoUniversitario, notasU);

       System.out.println("=====Turma fundamental=====\n");
       tf.avaliarTurma();
       System.out.println("=====Turma universitaria=====\n");
       tu.avaliarTurma();
    }
}
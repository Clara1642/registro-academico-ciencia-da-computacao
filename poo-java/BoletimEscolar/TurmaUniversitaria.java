package BoletimEscolar;

public class TurmaUniversitaria extends Turma {

    public TurmaUniversitaria(String nomeTurma,String[] nomeAlunos,double[][] notas){
        super(nomeTurma, nomeAlunos, notas);
    }
    @Override
    public void avaliarTurma(){
        double mediageral = 0,soma = 0;
        int cont = 0;
        for(int i = 0; i < getNotas().length;i++){
            if(mediaAluno(i) >= 6){
                System.out.print("Aprovado(a): "+getNomeAlunos()[i]+"\n");
            }
            else{
                System.out.print("Reprovado(a): "+getNomeAlunos()[i]+"\n");
            }
            for(int j = 0; j < getNotas()[i].length;j++){
                soma += getNotas()[i][j];
                cont++;
            }
        }
        
        mediageral = soma / cont;
        System.out.println("\nMédia geral: "+mediageral);
    }
}

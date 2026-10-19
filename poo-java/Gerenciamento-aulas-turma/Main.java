package Exercicio8;

public class Main {
    public static void main(String[] args){
    
        Aluno aluno1 = new Aluno("Joao",15,855876);

        Aluno[] vet = new Aluno[10];  

        vet[0] = aluno1;

        Sala sala1 = new Sala("enf", false,vet,1);

        Professor p1 = new Professor("julio",50,254366,sala1);

        p1.IniciarAula();
        p1.TerminarAula();
    }
    
}

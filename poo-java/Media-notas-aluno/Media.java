package Exercicio2;

public class Media {
    Aluno a;

    public Media(Aluno a){
        this.a = a;
    }

    public double Calculomedia(){
        return (a.nota1 + a.nota2 + a.nota3) / 3;

    }
    
}

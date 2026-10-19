package Prova2Gq1Chamada;

public class NoDamageException extends Exception{
    public NoDamageException(double ataque,double defesa){
        super("Não houve danos suficientes \n Ataque: "+ataque+ "\nDefesa: "+defesa);
    }
    
}

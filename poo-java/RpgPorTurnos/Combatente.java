package RpgPorTurnos;

public interface Combatente {
    abstract void receberDano(int dano);
    abstract void executarAcao(int dano,String habilidade,int linha,int coluna)throws AcaoInvalidaException;

    
}

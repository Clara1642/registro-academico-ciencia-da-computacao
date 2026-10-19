package Prova2Gq1Chamada;

public class Guerreiro extends Personagem implements Luta {
    private boolean estarvivo;

    public Guerreiro(double pontosDeVida, double ataque, double defesa,boolean estarvivo) {
        super(pontosDeVida, ataque, defesa);
        this.estarvivo = true;
    }

    public boolean isEstarvivo() {
        return estarvivo;
    }

    public void setEstarvivo(boolean estarvivo) {
        this.estarvivo = estarvivo;
    }

    @Override
    public double atacar(){
        return getAtaque() * 1.5;
    }

    @Override
    public void defender(double dano) throws NoDamageException{
        if(dano > getDefesa()){
            setPontosDeVida(getPontosDeVida() - dano);
            if(getPontosDeVida() <= 0){
                setEstarvivo(false);
            }
        }
        else{
            throw new NoDamageException(getAtaque(),getDefesa());
        }
    
    }
}
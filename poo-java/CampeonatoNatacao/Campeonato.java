package CampeonatoNatacao;

public class Campeonato {
    private Atleta[] vet = new Atleta[30];
    private int qtdAtualAtletasInscritos = 0;

    public Campeonato(){

    }


    public Atleta[] getVet() {
        return vet;
    }
    public void setVet(Atleta[] vet) {
        this.vet = vet;
    }
    public int getQtdAtualAtletasInscritos() {
        return qtdAtualAtletasInscritos;
    }
    public void setQtdAtualAtletasInscritos(int qtdAtualAtletasInscritos) {
        this.qtdAtualAtletasInscritos = qtdAtualAtletasInscritos;
    }
    
    public void inscreverAtleta(Atleta a){
        if(getQtdAtualAtletasInscritos() < 30){
            getVet()[getQtdAtualAtletasInscritos()] = a;
            setQtdAtualAtletasInscritos(getQtdAtualAtletasInscritos() + 1);
            System.out.println("Atleta inscrito com sucesso!!");
        }
        else{
            System.out.println("Não foi possivel, vetor cheio!!");
        }
    }
    public void exibirRanking(){
        for(int i = 0; i < getQtdAtualAtletasInscritos();i++){
            System.out.println("Nome atleta: "+getVet()[i].getNome());
            System.out.println("Pontuação total: "+getVet()[i].getPontuacaoTotal());
        }
    }
    
}

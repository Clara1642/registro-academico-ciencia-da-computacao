package CampeonatoNatacao;

public class AtletaNatacao extends Atleta implements Informacao{
    private int provasParticipadas = 0;
    private double[] temposProva = new double[5];
    private int indiceTempos = 0;

    public AtletaNatacao(String nome, String matricula, String modalidade){
        super(nome, matricula, modalidade);
    }

    public int getProvasParticipadas() {
        return provasParticipadas;
    }
    public void setProvasParticipadas(int provasParticipadas) {
        this.provasParticipadas = provasParticipadas;
    }
    public double[] getTemposProva() {
        return temposProva;
    }
    public void setTemposProva(double[] temposProva) {
        this.temposProva = temposProva;
    }
    public int getIndiceTempos() {
        return indiceTempos;
    }
    public void setIndiceTempos(int indiceTempos) {
        this.indiceTempos = indiceTempos;
    }

    public void calcularCategoria(){

        if(getPontuacaoTotal() <= 49){
            System.out.println("Categoria: Iniciante");
        }
        else if(getPontuacaoTotal() <= 149){
            System.out.println("Categoria: Intermediário");
        }
        else{
            System.out.println("Categoria: Avançado");
        }
    }

    public void registrarResultado(int pontos, double tempo){
        setProvasParticipadas(getProvasParticipadas() + 1);
        setPontuacaoTotal(getPontuacaoTotal() + pontos);

        if(getIndiceTempos() < 5){
            getTemposProva()[getIndiceTempos()] = tempo;
            setIndiceTempos(getIndiceTempos() + 1);
        }
        else{
            System.out.println("Não foi possivel registrar, vetor cheio!!");
        }

    }
    public void calcularDesempenho(){
        double media = 0,soma = 0;
        for(int i = 0; i < getIndiceTempos();i++){
            soma = soma + getTemposProva()[i];
        }
        if(getIndiceTempos() > 0){
            media = soma / getIndiceTempos();
            System.out.println("Nome atleta: "+getNome());
            System.out.println("Média de tempo: "+media);
            System.out.println("Pontuação total: "+getPontuacaoTotal());
        }
        else{
            System.out.println("Nenhuma prova registrada ainda.");
        }
       

    }

}

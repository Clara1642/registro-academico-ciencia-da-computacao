package SistemaDeStreamingDeMusicas;

public class ContaPremium extends ContaUsuario implements Reproduzivel,Gerenciavel {
    private String[] fila;
    private int[][] estatisticas;
    private int totalFaixas;
    private int indiceAtual;
    private int skipsUsadosNaHora;

    
    public ContaPremium(String nome, String email, String plano, int limiteSkipsPorHora, String[] fila,
            int[][] estatisticas, int totalFaixas, int indiceAtual, int skipsUsadosNaHora) {
        super(nome, email, plano, limiteSkipsPorHora);
        this.fila = fila;
        this.estatisticas = estatisticas;
        this.totalFaixas = totalFaixas;
        this.indiceAtual = indiceAtual;
        this.skipsUsadosNaHora = skipsUsadosNaHora;
    }


    public String[] getFila() {
        return fila;
    }
    public void setFila(String[] Fila) {
        this.fila = Fila;
    }
    public int[][] getEstatisticas() {
        return estatisticas;
    }
    public void setEstatisticas(int[][] estatisticas) {
        this.estatisticas = estatisticas;
    }
    public int getTotalFaixas() {
        return totalFaixas;
    }
    public void setTotalFaixas(int totalFaixas) {
        this.totalFaixas = totalFaixas;
    }
    public int getIndiceAtual() {
        return indiceAtual;
    }
    public void setIndiceAtual(int indiceAtual) {
        this.indiceAtual = indiceAtual;
    }
    public int getSkipsUsadosNaHora() {
        return skipsUsadosNaHora;
    }
    public void setSkipsUsadosNaHora(int skipsUsadosNaHora) {
        this.skipsUsadosNaHora = skipsUsadosNaHora;
    }    

    public double calcularCustoMensal(){
        double custoMensal = 0;
        if(getPlano().equalsIgnoreCase("Basico")){
            custoMensal = 15.0;
        }
        else if(getPlano().equalsIgnoreCase("Premium")){
            custoMensal = 25.0;
        }
        else if(getPlano().equalsIgnoreCase("Familia")){
            custoMensal = 35.0;
        }
        return custoMensal;
    }

    public void reproduzir(int indice) throws FaixaInvalidaException{
        int cont = 0;
        for(int i = 0; i < getFila().length;i++){
            if(getFila()[i] != null){
                cont++;
                break;
            }
        }   
        if(cont == 0){
            throw new FaixaInvalidaException("Vetor vázio");
        } 
        else if(indice < 0 || indice >= getFila().length){
            throw new FaixaInvalidaException("Índice inválido");
        }
        
        System.out.println("Faixa: "+getFila()[indice]);

        getEstatisticas()[indice][0] += 1;
        setIndiceAtual(indice);
    }
    
    public void avancarFaixa() throws FaixaInvalidaException{
        int calculo = 0;
        if(getSkipsUsadosNaHora() > getLimiteSkipsPorHora()){
            throw new FaixaInvalidaException("Limite de skips atigindo");
        }
        calculo = (getIndiceAtual() + 1) % getTotalFaixas();
        reproduzir(calculo);

    }

    public void adicionarFaixa(String faixa) throws FaixaInvalidaException{
        for(int i = 0;i < getFila().length;i++){
            if(getFila()[i] != null && getFila()[i].equals(faixa)){
                throw new FaixaInvalidaException("Faixa duplicada");
            }
        }
        if(getFila()[getFila().length - 1] != null){
            throw new FaixaInvalidaException("Vetor cheio");
        }

        for(int j = 0;j < getFila().length;j++){
            if(getFila()[j] == null){
                getFila()[j] = faixa;
                setTotalFaixas(getTotalFaixas() + 1);
                break;
            }
        }
    }

    public void exportarEstatiscas(String faixa){
        System.out.printf("Faixa | Reproduções | Skips");
       for(int i = 0; i < getTotalFaixas();i++){
        System.out.printf("%s | %d | %d\n",getFila()[i],getEstatisticas()[i][0],getEstatisticas()[i][1]);
       }
    }

    public void resetarSkips(){
        setSkipsUsadosNaHora(0);
    }
}

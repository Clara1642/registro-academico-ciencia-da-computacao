package SistemaViagem;

public class CentroDistribuicao {
    private String nomeCentro;
    private double[][] registroViagens = new double[2][5];
    
    public CentroDistribuicao(String nomeCentro) {
        this.nomeCentro = nomeCentro;
    }

    public String getNomeCentro() {
        return nomeCentro;
    }
    public void setNomeCentro(String nomeCentro) {
        this.nomeCentro = nomeCentro;
    }
    public double[][] getRegistroViagens() {
        return registroViagens;
    }
    public void setRegistroViagens(double[][] registroViagens) {
        this.registroViagens = registroViagens;
    }

    public double calcularMediaSemana(){
        double soma = 0;
        int totalDiasRegistrados = 0;
        for(int i = 0; i < this.registroViagens.length;i++){
            for(int j = 0; j < this.registroViagens[i].length;j++){
                soma = soma + registroViagens[i][j];
                totalDiasRegistrados++;
            }
        }

        return soma / totalDiasRegistrados;
    }

    public double calcularMaiorDistancia(){
        double m = registroViagens[0][0];
        for(int i = 0; i < this.registroViagens.length;i++){
            for(int j = 0; j < this.registroViagens[i].length;j++){
                if(m < registroViagens[i][j]){
                    m = registroViagens[i][j];
                }
            }
        }
        return m;
    }
    public double calcularMenorDistancia(){
        double m = registroViagens[0][0];
        for(int i = 0; i < this.registroViagens.length;i++){
            for(int j = 0; j < this.registroViagens[i].length;j++){
                if(registroViagens[i][j] < m){
                    m = registroViagens[i][j];
                }
            }
        }
        return m;
    }

    public void exibirRegistroCompleto(){
        System.out.println("Média semanal: "+calcularMediaSemana());
        System.out.println("Maior distância: "+calcularMaiorDistancia());
        System.out.println("Menor distância: "+calcularMenorDistancia());
    }
    

}

package PlaylistDeMusicas;

public class Playlist {
    private String nome;
    private Midia[] faixas;

    public Playlist(String nome,Midia[] faixas){
        this.nome = nome;
        this.faixas = faixas;

    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public Midia[] getFaixas() {
        return faixas;
    }
    public void setFaixas(Midia[] faixas) {
        this.faixas = faixas;
    }
    
    public void adicionar(Midia m){
        int i = 0;
        for(i = 0; i < faixas.length;i++){
            if(faixas[i] == null){
                faixas[i] = m;
                break;
            }
        }
    }

    public void DuracaoTotal(){
        int soma = 0;
        for(int i = 0; i < faixas.length;i++){
            if(faixas[i] != null){
                soma = soma + faixas[i].getDuracaoSegundos();
            }
        }
        System.out.println("Duração de segundos: "+soma);
    }

    public void exibir(){
        System.out.println("Nome: "+getNome());
        for(int i = 0; i <faixas.length; i++){
            if(faixas[i] != null){
                System.out.println("Titulo: "+faixas[i].getTitulo());
                System.out.println("Artista: "+faixas[i].getArtista());
                System.out.println("Duração de segundos: "+faixas[i].getDuracaoSegundos());
            }
        }        
    }
}

package PlaylistDeMusicas;

public class Podcast extends Midia implements Tocavel {
    private int episodio;
    private String canal;

    public Podcast(int episodio,String canal,String titulo,String artista,int duracaoSegundos){
        super(titulo, artista, duracaoSegundos);
        this.episodio = episodio;
        this.canal = canal;
    }

    public int getEpisodio() {
        return episodio;
    }
    public void setEpisodio(int episodio) {
        this.episodio = episodio;
    }
    public String getCanal() {
        return canal;
    }
    public void setCanal(String canal) {
        this.canal = canal;
    }

     public void info(){
        System.out.println("Titúlo: "+getTitulo());
        System.out.println("Artista: "+getArtista());
        System.out.println("Duração de segundos: "+duracaoFormatada());
        System.out.println("Episódio: "+getEpisodio());
        System.out.println("Canal: "+getCanal());
    }

    public void play(){
        System.out.println("O podcast está passando");
    }

    public void pause(){
        System.out.println("O podcast está pausado");
    }

    public void stop(){
        System.out.println("Nenhum podcast está passando");
    }
}

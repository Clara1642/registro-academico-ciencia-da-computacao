package PlaylistDeMusicas;

public class Musica extends Midia implements Tocavel{
    private String genero;

    public Musica(String genero,String titulo,String artista,int duracaoSegundos){
        super(titulo, artista, duracaoSegundos);
        this.genero = genero;

    }
    public String getGenero() {
        return genero;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public void info(){
        System.out.println("Genero: "+getGenero());
        System.out.println("Titúlo: "+getTitulo());
        System.out.println("Artista: "+getArtista());
        System.out.println("Duração de segundos: "+duracaoFormatada());
    }

    public void play(){
        System.out.println("A música está tocando");
    }
    public void pause(){
        System.out.println("A música está pausada");
    }
    public void stop(){
        System.out.println("Nenhuma música está tocando");
    }
    
   
}

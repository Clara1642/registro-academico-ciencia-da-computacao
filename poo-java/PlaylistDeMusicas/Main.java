package PlaylistDeMusicas;

public class Main {
    public static void main(String[] args){
        Musica m1 = new Musica("Pop", "Side to side", "Ariana Grande", 4500);
        Musica m2 = new Musica("Pop", "Everday", "Ariana Grande", 654);
        Musica m3 = new Musica("Pop", "Positions", "Ariana Grande", 799);
        Podcast p1 = new Podcast(8, "BTG", "era uma vez", "Silvia Braz", 6000);
        Podcast p2 = new Podcast(4, "POD Delas", "boa noite", "Tata", 3000);
        Midia[] m = new Midia[5];
        m[0] = m1;
        m[1] = m2;
        m[2] = m3;
        m[3] = p1;
        m[4] = p2;
        
        Playlist p = new Playlist("master diva", m);
        p.exibir();
        m1.play();
        m2.play();
        m3.play();
        p1.play();
        p2.play();
    }  
}

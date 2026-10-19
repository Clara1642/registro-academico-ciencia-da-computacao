package InterfaceMultiplas;

public class Main {
    public static void main(String[] args){
        Sapo s = new Sapo("Ricardo", 0.5, 0.7);
        Pato p = new Pato("José", 3.5, 1.2);
        Tubarao t = new Tubarao("Shark", 10000, 7);

        Andavel a, a1;
        Nadavel n, n1,n2;
        Voavel v;

        // Sapo
        a = s;
        n = s;

        // Pato
        a1 = p;
        n1 = p;
        v = p;

        // Tubarão
        n2 = t;

        a.andar();
        n.nadar();

        a1.andar();
        n1.nadar();
        v.voar();

        n2.nadar();

    }
    
}

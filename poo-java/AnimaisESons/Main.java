package AnimaisESons;

public class Main {
    public static void main(String[] args){
        Animal[] vet = new Animal[3];
        Cachorro cachorro1 = new Cachorro("Hanzo", "Canis lupus", 1, "Dogo Argentino");
        Passaro passaro1 = new Passaro("Carol","Amazona amazonica", 3, 35);
        Peixe peixe1 = new Peixe("Nemo", "Betta splendens", 1, "Água doce");

        vet[0] = cachorro1;
        vet[1] = passaro1;
        vet[2] = peixe1;

        for(int i = 0; i < 3;i++){
            vet[i].emitirSom();
            vet[i].mover();
            System.out.println();
        }

        cachorro1.exibirInfo();
        passaro1.exibirInfo();
        peixe1.exibirInfo();
        
    }
    
}

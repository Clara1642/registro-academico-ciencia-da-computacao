package Revisao;

public class Main {
    public static void main(String[] args){
        Resultado r = new Resultado();

        Pessoa p1 = new Pessoa("Ana", 'F', 20, 1.65, 60);
        Pessoa p2 = new Pessoa("Bruno", 'M', 17, 1.75, 70);
        Pessoa p3 = new Pessoa("Carla", 'F', 30, 1.60, 55);

        r.adicionar(p1);
        r.adicionar(p2);
        r.adicionar(p3);

        r.verificarIdade(p1);
        r.verificarIdade(p2);
        r.resultadoTotal();
    }
}

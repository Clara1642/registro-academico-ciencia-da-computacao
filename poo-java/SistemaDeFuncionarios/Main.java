package SistemaDeFuncionarios;

public class Main {
    public static void main(String[] args){
        Gerente g1 = new Gerente("João", "123456789-10", 3800,0.2);
        Vendedor v1 = new Vendedor("Carol", "109876543-21",1612, 100, 0.5);
        Estagiario e1 = new Estagiario("Clara", "130345704-10", 1200);

        System.out.println("=====Antes de calcular o salário=====\n");
        g1.exibirFicha();
        v1.exibirFicha();
        e1.exibirFicha();

        System.out.println("=====Após calcular o salário=====");
        g1.calcularSalario();
        g1.exibirFicha();

        v1.calcularSalario();
        v1.exibirFicha();
        
        e1.calcularSalario();
        e1.exibirFicha();

    }
}

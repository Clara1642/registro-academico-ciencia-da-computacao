package SistemaCafeteria;

public class Main {
    public static void main(String[] args){
        Vendedor v = new Vendedor("Clara", "123456", "Júnior", 5000, 100);


        v.registrarVenda(1, 50, 10.5);
        v.registrarVenda(2, 65, 10.5);
        v.registrarVenda(3, 44, 10.5);
        v.registrarVenda(4, 70, 10.5);
        
        System.out.println("Nome: "+v.getNome());
        System.out.println("Matricula: "+v.getMatricula());
        System.out.println("Cargo: "+v.getCargo());
        System.out.println("Salario base: "+v.getSalarioBase());
        System.out.println("Total produtos vendidos: "+v.getTotalProdutoVendidos());
        
        v.calcularfaturamento();
        System.out.println("Total faturamento da semana: "+v.getTotalFaturamento());

        for(int i = 0; i < 6;i++){
            System.out.printf("Quantidade vendida dia %d: %d \n ",i,v.getQuantidadeVendida()[i]);
            System.out.printf("Faturamento dia %d: %f \n ",i,v.getFaturamento()[i]);
        }

        v.melhorDiaDeVendas();
        System.out.println("Melhor dia de vendas: "+v.melhorDiaDeVendas());
        
        double salarioFinal = v.calcularSalariofinal();
        System.out.println("Salario final do vendedor(a): "+salarioFinal);

    }
    
}

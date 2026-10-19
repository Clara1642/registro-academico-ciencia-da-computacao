package SistemaBiblioteca;

public class Main {
    public static void main(String[] args){
        Aluno a1 = new Aluno("Clara", "00000855876", "Aluno",  2);

        a1.registrarEmprestimo(0, 2);
        a1.registrarEmprestimo(1, 1);
        a1.registrarEmprestimo(2, 4);
        a1.registrarEmprestimo(3, 1);

        System.out.println("Nome: "+a1.getNome());
        System.out.println("Matricula: "+a1.getMatricula());
        System.out.println("Tipo: "+a1.getTipo());

        for(int i = 0; i < 7;i++){
            System.out.printf("Emprestimos do dia %d: %d \n",i,a1.getEmprestimoPorDia()[i]);
        }

        a1.calcularTotalEmprestimo();
        System.out.println("Total de emprestimos da semana: "+a1.getTotalEmprestimos());
        

        System.out.println("Dia mais movimentado: "+a1.diaMaisMovimentado());
        System.out.println("Quantidade de livros atrasados: "+a1.getLivrosAtrasados());

        a1.calcularMulta();
        System.out.println("Valor total da multa: "+a1.calcularMulta());

    }
    
}

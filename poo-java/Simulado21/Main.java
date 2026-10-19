package Simulado21;

public class Main {
    public static void main(String[] args){

        Aluno a1 = new Aluno("Clara", "123", "Anual");
        a1.getHorasdeTreino()[0] = 1;
        a1.getHorasdeTreino()[1] = 2;
        a1.getHorasdeTreino()[2] = 2;

        a1.getCaloriasPorDia()[0] = 500;
        a1.getCaloriasPorDia()[1] = 1000;
        a1.getCaloriasPorDia()[2] = 1000;


        System.out.println("Login: "+a1.getLogin());
        System.out.println("Plano: "+a1.getPlano());
        System.out.println("Mensalidade: "+a1.calculoMensalidade());
        a1.calcularCalorias();
        System.out.println("Horas totais de treino: "+a1.getTotalHoras());
    

        for(int i = 0;i < 7;i++){

            System.out.println("Horas diarias de treino: "+a1.getHorasdeTreino()[i]);
            System.out.println("Calorias diarias: "+a1.getCaloriasPorDia()[i]);
        }
    }
}

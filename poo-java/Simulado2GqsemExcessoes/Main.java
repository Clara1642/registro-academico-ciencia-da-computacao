package Simulado2GqsemExcessoes;

public class Main {
    public static void main(String[] args){
        Aluno a1 = new Aluno("Clara", "123", "Mensal", 15, 1.5, 500);
        System.out.println("Login: "+a1.getLogin());
        System.out.println("Plano: "+a1.getPlano());
        System.out.println("Mensalidade: "+a1.calcularMensalidade());
        System.out.println("Horas diarias de treino: "+a1.getHorasDiariasDeTreino());
        System.out.println("Horas totais de treino: "+a1.getTotaisdeTreino());
        System.out.println("Calorias gastas diariamente: "+a1.calorias());

    }
    
}

package Simulado2GqsemExcessoes;

public class Aluno extends Usuario implements Treino {
    private double horasTotaisdeTreino = 0;
    private double horasDiariasDeTreino = 0;
    private double caloriasDiarias = 0;

    public Aluno(String login,String senha,String plano, double totaisdeTreino,double horasDiariasDeTreino, double caloriasDiarias){
        super(login, senha, plano);
        this.horasDiariasDeTreino = horasDiariasDeTreino;
        this.horasTotaisdeTreino = totaisdeTreino;
        this.caloriasDiarias = caloriasDiarias;

    }

    public double getTotaisdeTreino() {
        return horasTotaisdeTreino;
    }

    public void setTotaisdeTreino(int totaisdeTreino) {
        this.horasTotaisdeTreino = totaisdeTreino;
    }

    public double getHorasDiariasDeTreino() {
        return horasDiariasDeTreino;
    }

    public void setHorasDiariasDeTreino(int horasDiariasDeTreino) {
        this.horasDiariasDeTreino = horasDiariasDeTreino;
    }

    public double getCaloriasDiarias() {
        return caloriasDiarias;
    }

    public void setCaloriasDiarias(double caloriasDiarias) {
        this.caloriasDiarias = caloriasDiarias;
    }


    public double calcularMensalidade(){
        if(getPlano().equalsIgnoreCase("Mensal")){
            return 100;
        }
        if(getPlano().equalsIgnoreCase("Anual")){
            return 80;
        }
        if(getPlano().equalsIgnoreCase("especial")){
            return 55;
        }
        return 0;
    }

    public void tempodeTreino(int inicio,int fim){
        if(inicio < 5 || fim > 22){
            System.out.println("Horário inválido");
        }
        else{
            if(inicio - fim < 0){
                setHorasDiariasDeTreino((inicio - fim) * - 1);
            }
            else{
                setHorasDiariasDeTreino(inicio - fim);
            }
        }
    }

    public double calorias(){
        double totalcal;
        totalcal = getHorasDiariasDeTreino() * 500;
        return totalcal;
    }

}

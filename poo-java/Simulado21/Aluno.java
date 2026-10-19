package Simulado21;

public class Aluno extends Usuario implements Treino {
    private int[] horasdeTreino = new int[7];
    private int[] caloriasPorDia = new int [7];
    private int totalHoras = 0;
    private int totalCalorias = 0;

    public Aluno(String login,String senha,String plano){
        super(login, senha, plano);
    }

    public int[] getHorasdeTreino() {
        return horasdeTreino;
    }
    public void setHorasdeTreino(int[] horasdeTreino) {
        this.horasdeTreino = horasdeTreino;
    }
    public int[] getCaloriasPorDia() {
        return caloriasPorDia;
    }
    public void setCaloriasPorDia(int[] caloriasPorDia) {
        this.caloriasPorDia = caloriasPorDia;
    }
    public int getTotalHoras() {
        return totalHoras;
    }
    public void setTotalHoras(int totalHoras) {
        this.totalHoras = totalHoras;
    }
    public int getTotalCalorias() {
        return totalCalorias;
    }
    public void setTotalCalorias(int totalCalorias) {
        this.totalCalorias = totalCalorias;
    }

    public double calculoMensalidade(){
        if(getPlano().equalsIgnoreCase("Mensal")){
            return 100;
        }
        if(getPlano().equalsIgnoreCase("Anual")){
            return 80;
        }
        if(getPlano().equalsIgnoreCase("Especial")){
            return 55;
        }
        return 0;
    }

    public void registrarTreino(int dia,int inicio,int fim){
            if(inicio < 5 || fim > 22){
                System.out.println("Horário inválido");
                return;
            }
            else{
                if(inicio - fim < 0){
                    getHorasdeTreino()[dia] = (inicio - fim)  * (-1);
                }
                else{
                    getHorasdeTreino()[dia] = (inicio - fim);
                }
            }
    }

    public void calcularCalorias(){
        for(int i = 0; i < 7;i++){
            getCaloriasPorDia()[i] = getHorasdeTreino()[i] * 500;
            setTotalCalorias(getCaloriasPorDia()[i] + getTotalCalorias());
            setTotalHoras(getHorasdeTreino()[i] + getTotalHoras());
        }
        System.out.println("Total de horas da semana: "+getTotalHoras());
        System.out.println("Total de calorias: "+getTotalCalorias());
    }
}

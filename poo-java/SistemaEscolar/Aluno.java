package SistemaEscolar;

public class Aluno extends MembroEscolar implements Avaliavel {
    private double[] notas = new double[4];
    private int presensas;
    private int totalAulas;


    public Aluno(String nome, String matricula, String serie, String turno, int presensas,int totalAulas) {
        super(nome, matricula, serie, turno);
        this.presensas = presensas;
        this.totalAulas = totalAulas;
    }

    public double[] getNotas() {
        return notas;
    }
    public void setNotas(double[] notas) {
        this.notas = notas;
    }
    public int getPresensas() {
        return presensas;
    }
    public void setPresensas(int presensas) {
        this.presensas = presensas;
    }
    public int getTotalAulas() {
        return totalAulas;
    }
    public void setTotalAulas(int totalAulas) {
        this.totalAulas = totalAulas;
    }    
    public String calcularSituacao(double media){
        String situacao = null;
        if(getPresensas() < getTotalAulas() *75/100){
            System.out.println("Reprovado por frequência.");
            situacao = "Reprovado por frequência";
        }
        else if(media >= 7 && getPresensas() >= getTotalAulas() * 75/100){
            System.out.println("Aprovado");
            situacao = "Aprovado";
        }
        else if(media >= 5){
            System.out.println("Recuperação");
            situacao = "Recuperação";
        }
        else{
            System.out.println("Reprovado");
            situacao = "Reprovado";
        }
        return situacao;
    }

    public void registrarNota(double nota)throws NotaInvalidaException{
        if(nota >= 0.0 && nota <= 10.0){
            for(int i = 0; i < 4;i++){
                if(getNotas()[i] == 0.0){
                    getNotas()[i] = nota;
                    break;
                }
            }
        }
        else{
            throw new NotaInvalidaException();
        }
    }

    public double calcularMedia(){
        double soma = 0;
        for(int i = 0; i < 4;i++){
            soma = soma + getNotas()[i];
        }
        return soma / 4;
    }

    public void registarPresenca(){
        setPresensas(getPresensas() + 1);
        System.out.println("O novo total de presenças: "+getPresensas());
    }

    public double calcularFrequencia(){
        return ((double)getPresensas() / getTotalAulas()) * 100;
    }
}

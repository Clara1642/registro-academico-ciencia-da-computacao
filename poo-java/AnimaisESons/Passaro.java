package AnimaisESons;

public class Passaro extends Animal {
    private double envergadura;

    public Passaro(String nome,String especie,int idade,double envergadura){
        super(nome, especie, idade);
        this.envergadura = envergadura;
    }
    public double getEnvergadura() {
        return envergadura;
    }

    public void setEnvergadura(double envergadura) {
        this.envergadura = envergadura;
    }
    @Override
    public void emitirSom(){
        System.out.println("O passáro está gorjeando");
    }
    @Override
    public void mover(){
        System.out.println("O passáro está voando");
    }
}

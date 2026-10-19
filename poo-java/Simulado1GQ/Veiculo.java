package Simulado1GQ;

public class Veiculo {

    private String marca;
    private boolean estado = false;
    private double tanque;
    private double consumo;
    private double velocidadeAtual;
    private double litragemDoTaque;
    private double velocidadeMaxima;

    public Veiculo(String marca, boolean estado,double tanque,double consumo,double velocidadeAtual,double litragemDoTaque, double velocidadeMaxima){
        this.marca = marca;
        this.estado = estado;
        this.tanque = tanque;
        this.consumo = consumo;
        this.velocidadeAtual = velocidadeAtual;
        this.litragemDoTaque = litragemDoTaque;
        this.velocidadeMaxima = velocidadeMaxima;
    }

    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }
    public boolean getEstado() {
        return estado;
    }
    public void setEstado(boolean estado) {
        this.estado = estado;
    }
    public double getTanque() {
        return tanque;
    }
    public void setTanque(double tanque) {
        this.tanque = tanque;
    }
    public double getConsumo() {
        return consumo;
    }
    public void setConsumo(double consumo) {
        this.consumo = consumo;
    }
    public double getVelocidadeAtual() {
        return velocidadeAtual;
    }
    public void setVelocidadeAtual(double velocidadeAtual) {
        this.velocidadeAtual = velocidadeAtual;
    }
    public double getLitragemDoTaque() {
        return litragemDoTaque;
    }
    public void setLitragemDoTaque(double litragemDoTaque) {
        this.litragemDoTaque = litragemDoTaque;
    }
    public double getVelocidadeMaxima() {
        return velocidadeMaxima;
    }
    public void setVelocidadeMaxima(double velocidadeMaxima) {
        this.velocidadeMaxima = velocidadeMaxima;
    }


    public void Chavear(){
        if(getEstado() == false){
            setEstado(true);
        }
        else{
            setEstado(false);
        }
    }

    public void Acelerar(){
        if(getVelocidadeAtual() < getVelocidadeMaxima()){
            setVelocidadeAtual(getVelocidadeAtual() + 1);
        }
    }

    public void Frear(){
        if(getVelocidadeAtual() > 0){
            setVelocidadeAtual(getVelocidadeAtual() - 1);
        }
    }

    public void Corrida(double distancia){
        double distanciaConsumo;
        int cont = 0;
        distanciaConsumo = getConsumo() * cont;


        while(distanciaConsumo < distancia && getTanque() > 0){
            setTanque(getTanque() - 1);
            cont++;
            distanciaConsumo = getConsumo() * cont;
        }
        if(distanciaConsumo >= distancia){
            System.out.println("Distancia percorrida!!");
            setLitragemDoTaque(getLitragemDoTaque() - cont);
        }
        else if(distanciaConsumo < distancia){
            setVelocidadeAtual(0);
            setLitragemDoTaque(0);
            distancia = distancia - distanciaConsumo;
            System.out.println("Distancia restante: "+distancia+ "Km.");
        }
    }
}

package FormaGeometrica;

public class Retangulo extends Forma{
    private double largura;
    private double altura;

    public Retangulo(String cor,double largura,double altura){
        super(cor);
        this.largura = largura;
        this.altura = altura;
    }

    public double getLargura() {
        return largura;
    }
    public void setLargura(double largura) {
        this.largura = largura;
    }
    public double getAltura() {
        return altura;
    }
    public void setAltura(double altura) {
        this.altura = altura;
    }
    
    @Override
    public double calcularArea(){
        double area;
        area = getLargura() * getAltura();
        return area;
    }
    @Override
    public double calcularPerimetro(){
        double perimetro;
        perimetro = (getLargura() * 2) + (getAltura() * 2);
        return perimetro;
    }
}

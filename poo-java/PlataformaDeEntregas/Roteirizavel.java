package PlataformaDeEntregas;

public interface Roteirizavel {

    abstract void registrarEntrega(int linha,int coluna,int tempo,int distancia,int avaliacao) throws EntregaInvalidaException;
    abstract double calcularDesempenho(double avaliacao,int tempo);
    
}

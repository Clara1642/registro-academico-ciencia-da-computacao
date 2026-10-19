package TorneioEsportivo;

public interface Competidor {
    void registrarResultado(int time1, int time2) throws ResultadoInvalidoException;
    int calcularClassificacao();
}

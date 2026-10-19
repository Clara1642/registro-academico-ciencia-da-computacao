package SistemaDeStreamingDeMusicas;

public interface Gerenciavel {
    void adicionarFaixa(String faixa) throws FaixaInvalidaException;
    void exportarEstatiscas(String faixa);
}

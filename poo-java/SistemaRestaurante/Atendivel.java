package SistemaRestaurante;

public interface Atendivel {
    void registrarPedido(int mesa,String pedido) throws PedidoInvalidoException;
    void cancelarPedido(String pedido);
    
}

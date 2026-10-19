package SistemaRestaurante;

public class Garcom extends ColaboradorRestaurante implements Atendivel {
    private int[] mesaAtendidas;
    private String[] pedidosAtivos;
    private int totalPedidosRealizados;
    
    public Garcom(String nome, String cpf, String cargo, double salarioBase, int[] mesaAtendidas,
            String[] pedidosAtivos, int totalPedidosRealizados) {
        super(nome, cpf, cargo, salarioBase);
        this.mesaAtendidas = mesaAtendidas;
        this.pedidosAtivos = pedidosAtivos;
        this.totalPedidosRealizados = totalPedidosRealizados;
    }


    public int[] getMesaAtendidas() {
        return mesaAtendidas;
    }
    public void setMesaAtendidas(int[] mesaAtendidas) {
        this.mesaAtendidas = mesaAtendidas;
    }
    public String[] getPedidosAtivos() {
        return pedidosAtivos;
    }
    public void setPedidosAtivos(String[] pedidosAtivos) {
        this.pedidosAtivos = pedidosAtivos;
    }
    public int getTotalPedidosRealizados() {
        return totalPedidosRealizados;
    }
    public void setTotalPedidosRealizados(int totalPedidosRealizados) {
        this.totalPedidosRealizados = totalPedidosRealizados;
    }

    public void calcularSalario(){
        double calculo = 0;
        calculo =  getSalarioBase() + (getTotalPedidosRealizados() * 2.50);
        System.out.println("Salário: "+calculo);
    }

    public void registrarPedido(int mesa,String pedido) throws PedidoInvalidoException{
        int cont = 0;
        if(mesa < 1 || mesa > 20){
            throw new PedidoInvalidoException("Número da mesa inválido");
        }
        for(int i = 0; i < 20;i++){
            if(getMesaAtendidas()[i] == mesa){
                cont++;
            }
        }
        if(cont >= 1){
            throw new PedidoInvalidoException("Mesa já está ocupada");
        }

        for(int i = 0; i < getPedidosAtivos().length;i++){
            if(getPedidosAtivos()[i] == null){
                getPedidosAtivos()[i] = pedido;
                break;
            }
        }
    }


    public void cancelarPedido(String pedido){
        for(int i = 0;i < getPedidosAtivos().length;i++){
            if(pedido.equals(getPedidosAtivos()[i])){
                getPedidosAtivos()[i] = null;
                for(int j = i;j < getPedidosAtivos().length - 1;j++){
                    getPedidosAtivos()[j] = getPedidosAtivos()[j + 1];
                }
                getPedidosAtivos()[getPedidosAtivos().length - 1] = null;
                break;
            }
        }
    }

    public void atribuirMesa(int mesa){
        for(int i = 0; i < getMesaAtendidas().length;i++){
            if(getMesaAtendidas()[i] == 0){
                getMesaAtendidas()[i] = mesa;
                break;
            }
        }
        if(getMesaAtendidas()[getMesaAtendidas().length - 1] != 0){
            System.out.println("Está cheia");
        }
    }
    public void finalizarPedido(int mesa){
        for(int i = 0; i < getMesaAtendidas().length;i++){
            if(getMesaAtendidas()[i] == mesa){
                getMesaAtendidas()[i] = 0;
                break;
            }
        }
        setTotalPedidosRealizados(getTotalPedidosRealizados() + 1);
        System.out.println("Finalizado o atendimento");
    }
}

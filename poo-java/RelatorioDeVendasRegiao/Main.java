package RelatorioDeVendasRegiao;

public class Main {
    public static void main(String[] args){
        String[] regioes = {"Norte","Sul","Leste"};
        String[] meses = {"Janeiro","Fevereiro","Março","Abril"};
        double[][] vendas = {{2345,6798,3678,3589},{3657,3469,4975,2367},{4589,2578,1459,8654}};

        RelatorioVendas r1 = new RelatorioVendas(regioes, meses, vendas);

        r1.exibirRelatorio();

    }
    
}

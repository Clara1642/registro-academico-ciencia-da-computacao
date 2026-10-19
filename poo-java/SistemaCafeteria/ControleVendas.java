package SistemaCafeteria;

interface ControleVendas {
    void registrarVenda(int dia,int quantidade,double valorUnitario);
    void calcularfaturamento();
    int melhorDiaDeVendas();
}

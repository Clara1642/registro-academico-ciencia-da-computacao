package SistemaBiblioteca1;

public class Biblioteca {
    private ItemBiblioteca[] vet = new ItemBiblioteca[50];
    private int qtdIntensCadastrados = 0;

    public ItemBiblioteca[] getVet() {
        return vet;
    }
    public void setVet(ItemBiblioteca[] vet) {
        this.vet = vet;
    }
    public int getQtdIntensCadastrados() {
        return qtdIntensCadastrados;
    }
    public void setQtdIntensCadastrados(int qtdIntensCadastrados) {
        this.qtdIntensCadastrados = qtdIntensCadastrados;
    }

    public void adicionarItem(ItemBiblioteca item){
        if(getQtdIntensCadastrados() < 50){
            getVet()[getQtdIntensCadastrados()] = item;
            setQtdIntensCadastrados(getQtdIntensCadastrados() + 1);
        }
        else{
            System.out.println("Não foi possivel cadastrar, vetor cheio!!");
        }
    }

    public void listarDisponiveis(){
        for(int i = 0;i < getQtdIntensCadastrados();i++){
            if(getVet()[i].getDisponivel() == true){
                System.out.println("item: "+(i + 1)+" \n");
                System.out.println("Titulo: "+getVet()[i].getTitulo());
                System.out.println("Autor: "+getVet()[i].getAutor());
                System.out.println("Codigo: "+getVet()[i].getCodigo());
            }
        }
    }


    
}

package SistemaBancario;

public class GerenciadorContas {
    private ContaBancaria[] vet = new ContaBancaria[20];
    private int qtdContasCadastradas = 0;

    public GerenciadorContas(){
        
    }

    public ContaBancaria[] getVet() {
        return vet;
    }
    public void setVet(ContaBancaria[] vet) {
        this.vet = vet;
    }
    public int getQtdContasCadastradas() {
        return qtdContasCadastradas;
    }
    public void setQtdContasCadastradas(int qtdContasCadastradas) {
        this.qtdContasCadastradas = qtdContasCadastradas;
    }

    public void cadastrarConta(ContaBancaria c){
        if(getQtdContasCadastradas() < 20){
            if(getVet()[getQtdContasCadastradas()] == null){
                getVet()[getQtdContasCadastradas()] = c;
                setQtdContasCadastradas(getQtdContasCadastradas() + 1);
            }
        }
        else{
            System.out.println("Não é possivel cadastrar conta. vetor cheio!!");
        }
    }

    public void listarContas(){
        for(int i = 0; i < getQtdContasCadastradas();i++){
            System.out.println("Número da conta: "+getVet()[i].getNumeroConta());
            System.out.println("Titúlar: "+getVet()[i].getTitular());
        }
    }
}

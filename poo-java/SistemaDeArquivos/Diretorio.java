package SistemaDeArquivos;

public class Diretorio extends EntradaSistema{
    private EntradaSistema[] conteudo;
    private int cont = 0;
    
    public Diretorio(String nome,String caminho,long tamanho){
        super(nome, caminho, tamanho);
        this.conteudo = new EntradaSistema[10];
    }
    
    public EntradaSistema[] getConteudo() {
        return conteudo;
    }

    public void setConteudo(EntradaSistema[] conteudo) {
        this.conteudo = conteudo;
    }

    
    public void descrever(){
        System.out.println("Diretorio: "+getNome());
        System.out.println("Itens: "+cont);
        for(int i = 0; i < cont; i++){
            System.out.println("- "+getConteudo()[i].getNome());
        }
    }


    public void adicionar(EntradaSistema e){
        if(cont < 10){
            getConteudo()[cont] = e;
            cont++;
        }
        else{
            System.out.println("O vetor está cheio");
        }
    }

    public long calcularEspacoOcupado(){
        long total = 0;
        for(int i = 0; i < cont; i++){
            total += getConteudo()[i].getTamanho();
        }
        return total;
    }
}

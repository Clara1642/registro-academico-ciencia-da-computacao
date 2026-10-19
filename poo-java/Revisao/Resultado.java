package Revisao;

public class Resultado {
    private int[] vet = new int[10];
    private String[] vet1 = new String[10];
    private Pessoa[] vet2 = new Pessoa[10];
    private int qtd = 0;

    public int[] getVet() {
        return vet;
    }
    public void setVet(int[] vet) {
        this.vet = vet;
    }
    public String[] getVet1() {
        return vet1;
    }
    public void setVet1(String[] vet1) {
        this.vet1 = vet1;
    }
    public Pessoa[] getVet2() {
        return vet2;
    }
    public void setVet2(Pessoa[] vet2) {
        this.vet2 = vet2;
    }
   

    public void adicionar(Pessoa p){
        vet2[qtd] = p;
        qtd++;
    }

    public void verificarIdade(Pessoa p){
        if(p.getIdade() >= 18){
            System.out.println("Você é maior de idade.");
        }
        else{
            System.out.println("Você não e maior de idade.");
        }
    }

    public void resultadoTotal(){
        String[] nomes = new String[10];
        int[] idades = new int[10];
        double soma = 0;
        double media;

        for(int i = 0; i < qtd;i++){
            nomes[i] = vet2[i].getNome();
            idades[i] = vet2[i].getIdade();
        }
        for(int j = 0; j < qtd; j++){
            soma += idades[j];
        }
        media = soma/qtd;

        System.out.println("A média das idades é: "+media);

    }

}

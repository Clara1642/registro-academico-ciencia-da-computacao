package RedeSocial;

public class PerfilUsuario extends Perfil implements Publicavel{
    private String[] publicacoes;
    private int totalSeguidores;
    private int totalPublicacoes;

    public PerfilUsuario(String nomeUsuario, String email, String dataCriacao, String tipoPlano, String[] publicacoes,
            int totalSeguidores, int totalPublicacoes) {
        super(nomeUsuario, email, dataCriacao, tipoPlano);
        this.publicacoes = publicacoes;
        this.totalSeguidores = totalSeguidores;
        this.totalPublicacoes = totalPublicacoes;
    }


    public String[] getPublicacoes() {
        return publicacoes;
    }
    public void setPublicacoes(String[] publicacoes) {
        this.publicacoes = publicacoes;
    }
    public int getTotalSeguidores() {
        return totalSeguidores;
    }
    public void setTotalSeguidores(int totalSeguidores) {
        this.totalSeguidores = totalSeguidores;
    }
    public int getTotalPublicacoes() {
        return totalPublicacoes;
    }
    public void setTotalPublicacoes(int totalPublicacoes) {
        this.totalPublicacoes = totalPublicacoes;
    }
    
    public void calcularEngajamento(){
        int calculo = 0;
        if(getTotalSeguidores() == 0){
            System.out.println("Índice de engajamento: 0 (sem seguidores ainda)");
            return;
        }
        calculo = (getTotalPublicacoes() * 100) / getTotalSeguidores() + 1;
        System.out.println("Índice de engajamento: "+calculo);
    }

    public void publicarConteudo(String publicacao)throws ConteudoInvalidoException{
        if(publicacao == null || publicacao.isEmpty()){
            throw new ConteudoInvalidoException("conteúdo nulo/vázio.");
        }
        else if(publicacao.length() > 280){
            throw new ConteudoInvalidoException("Ultrapassou o limite de 280 caracteres.");
        }
        else if(getPublicacoes()[getPublicacoes().length - 1] != null){
            throw new ConteudoInvalidoException("O limite máximo de publicacoes foi atingido.");
        }

        getPublicacoes()[getTotalPublicacoes()] = publicacao;
        setTotalPublicacoes(getTotalPublicacoes() + 1);
    }

    public void removerPublicacao(int indice){
        if(indice >= 0 && indice < getPublicacoes().length){
            for(int i = 0; i < getPublicacoes().length;i++){
                if(i == indice){
                    getPublicacoes()[i] = null;
                    for(int j = i ; j < getPublicacoes().length - 1;j++){
                        getPublicacoes()[j] = getPublicacoes()[j + 1];
                    }
                    setTotalPublicacoes(getTotalPublicacoes() - 1);
                }
            } 
            getPublicacoes()[getPublicacoes().length - 1] = null;
        }
    }

    public void seguir(){
        setTotalSeguidores(getTotalSeguidores() + 1);
        System.out.println("Novo total de seguidores: "+getTotalSeguidores());
    }

    public void listarPublicacoes(){
        for(int i = 0; i < getTotalPublicacoes(); i++){
            System.out.printf("publicação %d: %s\n\n",i,getPublicacoes()[i]);
        }
    }
}

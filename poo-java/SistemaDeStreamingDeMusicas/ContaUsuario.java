package SistemaDeStreamingDeMusicas;

public abstract class ContaUsuario {
    private String nome;
    private String email;
    private String plano;
    private int limiteSkipsPorHora;

    public ContaUsuario(String nome, String email, String plano, int limiteSkipsPorHora) {
        this.nome = nome;
        this.email = email;
        this.plano = plano;
        this.limiteSkipsPorHora = limiteSkipsPorHora;
    }


    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    public String getPlano() {
        return plano;
    }
    public void setPlano(String plano) {
        this.plano = plano;
    }
    public int getLimiteSkipsPorHora() {
        return limiteSkipsPorHora;
    }
    public void setLimiteSkipsPorHora(int limiteSkipsPorHora) {
        this.limiteSkipsPorHora = limiteSkipsPorHora;
    }

    
    public void validarPlano(){
        if(getPlano().equalsIgnoreCase("Basico")){
            System.out.println("Plano: básico é válido");
        }
        else if(getPlano().equalsIgnoreCase("Premium")){
            System.out.println("Plano: premium é válido");
        }
        else if(getPlano().equalsIgnoreCase("Familia")){
            System.out.println("Plano: familia é válido");
        }
    }

    abstract double calcularCustoMensal();
}

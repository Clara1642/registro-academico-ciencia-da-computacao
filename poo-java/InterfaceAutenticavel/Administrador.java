package InterfaceAutenticavel;

public class Administrador implements Autenticavel{
    private String login;
    private String senha;
    private String nivelAcesso;
    private int tentativas = 0;
    private boolean bloqueado = false;

    public Administrador(String login, String senha, String nivelAcesso) {
        this.login = login;
        this.senha = senha;
        this.nivelAcesso = nivelAcesso;
    }

    public String getLogin() {
        return login;
    }
    public void setLogin(String login) {
        this.login = login;
    }
    public String getSenha() {
        return senha;
    }
    public void setSenha(String senha) {
        this.senha = senha;
    }
    public String getNivelAcesso() {
        return nivelAcesso;
    }
    public void setNivelAcesso(String nivelAcesso) {
        this.nivelAcesso = nivelAcesso;
    }
        public int getTentativas() {
        return tentativas;
    }

    public void setTentativas(int tentativas) {
        this.tentativas = tentativas;
    }

    public boolean getBloqueado() {
        return bloqueado;
    }

    public void setBloqueado(boolean bloqueado) {
        this.bloqueado = bloqueado;
    }

    public boolean autenticar(String senha){
        if(getSenha().equals(senha)){
            return true;
        }
        else if(getTentativas() > 3){
            bloquear();
            return false;
        }

        else{
           setTentativas(getTentativas() + 1);
            return false;
        }
    }
    public void bloquear(){
        setBloqueado(true);
        System.out.println("Bloqueado");
    }
}

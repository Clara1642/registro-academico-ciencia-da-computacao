package SistemaBiblioteca3;

public class Livro extends Material implements Emprestavel {
    private String autor;

    public Livro(String titulo, String codigo, String autor) {
        super(titulo, codigo);
        this.autor = autor;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }
    
    public void realizarEmprestimo(int diasEmprestimo)throws PrazoInvalidoException{
        if(diasEmprestimo > 30 || diasEmprestimo < 1){
            throw new PrazoInvalidoException(diasEmprestimo);
        }
        else{
            System.out.println("O livro sera emprestado por: "+diasEmprestimo+" dias");
            setDiasEmprestado(diasEmprestimo);
        }
    }

    public double calcularMulta(){
        if(30 - getDiasEmprestado() > 15){
            return 3.50;
        }
        if(30 - getDiasEmprestado() >= 6){
            return 2;
        }
        if(30 - getDiasEmprestado() >= 1){
            return 1;
        }
        return 0;
    }
}

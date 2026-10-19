package SistemaBiblioteca3;

public abstract class Material {
    private String titulo;
    private String Codigo;
    private int diasEmprestado = 0;

    
    public Material(String titulo, String codigo) {
        this.titulo = titulo;
        this.Codigo = codigo;
    }
    public String getTitulo() {
        return titulo;
    }
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    public String getCodigo() {
        return Codigo;
    }
    public void setCodigo(String codigo) {
        Codigo = codigo;
    }
    public int getDiasEmprestado() {
        return diasEmprestado;
    }
    public void setDiasEmprestado(int diasEmprestado) {
        this.diasEmprestado = diasEmprestado;
    }

    abstract double calcularMulta();
    
    
}

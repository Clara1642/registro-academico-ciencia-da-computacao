package SistemaCafeteria;

public abstract class Funcionario {
    private String nome;
    private String matricula;
    private String cargo;
    private double salarioBase;

    public Funcionario(String nome,String matricula,String cargo,double salarioBase){
        this.nome = nome;
        this.matricula = matricula;
        this.cargo = cargo;
        this.salarioBase = salarioBase;
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public String getCargo() {
        return cargo;
    }
    public void setCargo(String cargo) {
        this.cargo = cargo;
    }
    public double getSalarioBase() {
        return salarioBase;
    }
    public void setSalarioBase(double salarioBase) {
        this.salarioBase = salarioBase;
    }
    
    abstract double calcularSalariofinal();
}

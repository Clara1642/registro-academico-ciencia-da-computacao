package SistemaBiblioteca;

interface ControleEmprestimo {
    void registrarEmprestimo(int dia,int quantidade);
    int calcularTotalEmprestimo();
    int diaMaisMovimentado();
    
}

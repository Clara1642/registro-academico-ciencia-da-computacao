package BibliotecaUniversitaria;

public class AlunoBiblioteca extends PessoaBiblioteca implements Emprestavel {
    private boolean[][] acervoDisponivel;
    private int emprestimoAtivos;
    private int[] diasDeAtraso;
    private double multaAtual;
    private int diasEmprestados;


        public AlunoBiblioteca(String matricula, String nome, String categoria, int limiteEmprestimo,
            boolean[][] acervoDisponivel, int emprestimoAtivos, int[] diasDeAtraso, double multaAtual,int diasEmprestados) {
        super(matricula, nome, categoria, limiteEmprestimo);
        this.acervoDisponivel = acervoDisponivel;
        this.emprestimoAtivos = emprestimoAtivos;
        this.diasDeAtraso = diasDeAtraso;
        this.multaAtual = multaAtual;
        this.diasEmprestados = diasEmprestados;
    }

    public boolean[][] getAcervoDisponivel() {
        return acervoDisponivel;
    }
    public void setAcervoDisponivel(boolean[][] acervoDisponivel) {
        this.acervoDisponivel = acervoDisponivel;
    }
    public int getEmprestimoAtivos() {
        return emprestimoAtivos;
    }
    public void setEmprestimoAtivos(int emprestimoAtivos) {
        this.emprestimoAtivos = emprestimoAtivos;
    }
    public int[] getDiasDeAtraso() {
        return diasDeAtraso;
    }
    public void setDiasDeAtraso(int[] diasDeAtraso) {
        this.diasDeAtraso = diasDeAtraso;
    }
    public double getMultaAtual() {
        return multaAtual;
    }
    public void setMultaAtual(double multaAtual) {
        this.multaAtual = multaAtual;
    }

    public int getDiasEmprestados() {
        return diasEmprestados;
    }
    public void setDiasEmprestados(int diasEmprestados) {
        this.diasEmprestados = diasEmprestados;
    }

    public int calcularPrazoPadrao(){
        int prazoPadrao = 0;
        if(getCategoria().equalsIgnoreCase("Graduacao")){
            prazoPadrao = 7;
        }
        else if(getCategoria().equalsIgnoreCase("Pos")){
            prazoPadrao = 14;
        }
        else if(getCategoria().equalsIgnoreCase("Monitoria")){
            prazoPadrao = 21;
        }
        return prazoPadrao;
    }

    public void registrarEmprestimo(int linha,int coluna,int dia)throws EmprestimoInvalidoException{

        if(linha < 0 || linha >= getAcervoDisponivel().length || coluna < 0 || coluna >= getAcervoDisponivel()[0].length){
            throw new EmprestimoInvalidoException("Essa posição do acervo não existe.");
        }

        else if(dia < 0){
            throw new EmprestimoInvalidoException("Dia inválido.");
        }

        else if(getEmprestimoAtivos() >= getLimiteEmprestimo()){
            throw new EmprestimoInvalidoException("Limites de emprestimos foram ultrapassados.");
        }

        else if(getAcervoDisponivel()[linha][coluna] == false){
            getAcervoDisponivel()[linha][coluna] = true;
            setEmprestimoAtivos(getEmprestimoAtivos() + 1);
            setDiasEmprestados(dia);
        }
    }

    public double calcularMulta(){
        double soma = 0;
        double multa = 0;
        for(int i = 0; i < getDiasDeAtraso().length;i++){
            soma = soma + getDiasDeAtraso()[i];
        }
        multa = soma * 2.50;
        if(getCategoria().equalsIgnoreCase("Monitoria")){
            multa = multa - (multa * 0.30);
        }
        return multa;
    }
}

package EstacionamentoInteligente;

public class ClienteMensalista extends ClienteEstacionamento implements Tarifavel {
    private boolean[][] ocupacaoVagas;
    private int horasUsadasNoMes;
    private double valorUltimaTarifa;

    public ClienteMensalista(String placa, String nome, String tipoCliente, double saldo, boolean[][] ocupacaoVagas,
            int horasUsadasNoMes, double valorUltimaTarifa) {
        super(placa, nome, tipoCliente, saldo);
        this.ocupacaoVagas = ocupacaoVagas;
        this.horasUsadasNoMes = horasUsadasNoMes;
        this.valorUltimaTarifa = valorUltimaTarifa;
    }

    public boolean[][] getOcupacaoVagas() {
        return ocupacaoVagas;
    }
    public void setOcupacaoVagas(boolean[][] ocupacaoVagas) {
        this.ocupacaoVagas = ocupacaoVagas;
    }
    public int getHorasUsadasNoMes() {
        return horasUsadasNoMes;
    }
    public void setHorasUsadasNoMes(int horasUsadasNoMes) {
        this.horasUsadasNoMes = horasUsadasNoMes;
    }
    public double getValorUltimaTarifa() {
        return valorUltimaTarifa;
    }
    public void setValorUltimaTarifa(double valorUltimaTarifa) {
        this.valorUltimaTarifa = valorUltimaTarifa;
    }    


    public boolean validarCadastro(){
        boolean validado = false;
        if(getPlaca().length() == 7 && (getTipoCliente().equalsIgnoreCase("Comum") ||
        getTipoCliente().equalsIgnoreCase("Convenio") ||
        getTipoCliente().equalsIgnoreCase("Vip"))){
            validado = true;
        }
        return validado;
    }

    public void registrarUso(int linha,int coluna) throws PermanenciaInvalidaException{
        if(getHorasUsadasNoMes() < 0){
            throw new PermanenciaInvalidaException("O tempo de permanencia está negativo.");
        }
        else if(getHorasUsadasNoMes() == 0){
            throw new PermanenciaInvalidaException("O tempo de permanencia está nulo.");
        }
        else if(getHorasUsadasNoMes() > 24){
            throw new PermanenciaInvalidaException("O limite de 24 horas foi ultrapassado.");
        }
        else if(linha < 0 || linha >= getOcupacaoVagas().length || coluna < 0 || coluna >= getOcupacaoVagas()[linha].length){
            throw new PermanenciaInvalidaException("A vaga procurada não existe.");

        }

       
        if(getOcupacaoVagas()[linha][coluna] == false && validarCadastro() == true){
            if(getTipoCliente().equalsIgnoreCase("Comum")){
                getOcupacaoVagas()[linha][coluna] = true;
                setHorasUsadasNoMes(getHorasUsadasNoMes() + 1);
            }
            else if(getTipoCliente().equalsIgnoreCase("Convenio")){
                getOcupacaoVagas()[linha][coluna] = true;
                setHorasUsadasNoMes(getHorasUsadasNoMes() + 1);
            }
            else if(getTipoCliente().equalsIgnoreCase("Vip")){
                getOcupacaoVagas()[linha][coluna] = true;
                setHorasUsadasNoMes(getHorasUsadasNoMes() + 1);
            }
        }    
    }
    
    

    public void calcularTarifa(){
        if(getTipoCliente().equalsIgnoreCase("Comum")){
            setValorUltimaTarifa(getHorasUsadasNoMes() * 8);
        }
        else if(getTipoCliente().equalsIgnoreCase("Convenio")){
            setValorUltimaTarifa(getHorasUsadasNoMes() * 5);
        }
        else if(getTipoCliente().equalsIgnoreCase("Vip")){
            if(getHorasUsadasNoMes() > 40){
                setValorUltimaTarifa(getHorasUsadasNoMes() * 3);
            }
        }

    }
}

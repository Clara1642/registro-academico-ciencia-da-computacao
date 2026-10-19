package SistemaBancarioComLimiteDiario;

public class LimiteDiarioException extends Exception {
    public LimiteDiarioException(){
        super("Limite diario foi ultrapassado");
    }
}

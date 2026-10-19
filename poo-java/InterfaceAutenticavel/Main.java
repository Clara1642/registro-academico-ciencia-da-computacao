package InterfaceAutenticavel;

public class Main {
    public static void main(String[] args) {
        boolean result;
        UsuarioSistema u1 = new UsuarioSistema("Joao123", "3456A@", "Joaosamuel@gmail.com");
        Administrador a1 = new Administrador("Carlos3456", "984747thJ@", "prata");

        result = u1.autenticar("3456A@");
        
        if(result == true){
            System.out.println("Senha autenticada");
        }
        else{
            System.out.println("Senha inválida");
        }

        result = a1.autenticar("12345");

        if(result == true){
            System.out.println("Senha autenticada");
        }
        else{
            System.out.println("Senha inválida");
        }
    }
    
}

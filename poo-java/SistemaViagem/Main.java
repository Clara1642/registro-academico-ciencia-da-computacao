package SistemaViagem;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Caminhao c1 = new Caminhao("ABC1D23", "Caio", 200, 100000, "Rafael", 6.0);
        Caminhao c2 = new Caminhao("ADC2R67", "Mercedez", 200, 100000, "Carlos", 6.0);
        CentroDistribuicao cd = new CentroDistribuicao("Coca cola");

        Scanner s = new Scanner(System.in);
        for(int i = 0; i < 10;i++){

            System.out.println("Informe os valores do caminhao 1: ");
            c1.getConsumoUltimasViagens()[i] = s.nextDouble();

            System.out.println("Informe os valores do caminhao 2: ");
            c2.getConsumoUltimasViagens()[i] = s.nextDouble();

        }

        for(int i = 0; i < cd.getRegistroViagens().length;i++){
            for(int j = 0; j < cd.getRegistroViagens()[i].length;j++){
                if(i == 0){
                    cd.getRegistroViagens()[i][j] = c1.getConsumoUltimasViagens()[j];
                }
                else if(i == 1){
                    cd.getRegistroViagens()[i][j] = c2.getConsumoUltimasViagens()[j];
                }
            }
        }

        

    
        s.close();
    }

}

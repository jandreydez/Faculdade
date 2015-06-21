package aula6.pkg1;
import java.util.Scanner;

public class Aula61 {
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);
        int i=0;
        double mav=0,mev,vet[] = new double[5];
        
        for(i=0;i<5;i++){
            System.out.printf("Digite uma nota\n");
            vet[i] = ler.nextDouble();
        }
        mev=vet[0];
        for(i=0;i<5;i++){
            if(mav<vet[i]){mav=vet[i];}
            if(mev>vet[i]){mev=vet[i];}
        }
        System.out.printf("Maior Valor:%.1f\nMenor Valor:%.1f",mav,mev);
    }  
}

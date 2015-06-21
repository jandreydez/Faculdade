package aula6.pkg2;
import java.util.Scanner;
public class Aula62 {
    public static void main(String[] args) {
       Scanner ler = new Scanner (System.in);
       int i,j,dp=0,ds=0,vet[][] = new int [4][4];
       for(i=0;i<4;i++){
            for(j=0;j<4;j++){vet[i][j] = ler.nextInt();}
       }
       for(i=0;i<4;i++){
            for(j=0;j<4;j++){System.out.printf("%d  ",vet[i][j]);}
            System.out.printf("\n");
       }
       for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(i==j){dp+=vet[i][j];}
                if(i+j==5){ds+=vet[i][j];}
            }
       }
       System.out.printf("Diagonal principal:%d\nDiagonal secundária:%d",dp,ds);
    }    
}

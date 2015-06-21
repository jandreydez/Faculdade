#include <conio.h>
#include <math.h>
#include <stdio.h>
#define n 100

main(){
       char loja[8][10],produto[4][10];
       float preco[8][4];
       int i,j;
       
       for(j=1;j<=8;j++){
                         printf("digite a loja:");
                         scanf("%s",&loja[j]);
                         }
       for(i=1;i<=4;i++){
                         printf("digite o produto:");
                         scanf("%s",&produto[i]);
                         }
       for(i=1;i<=4;i++){
                         for(j=1;j<=8;j++){
                         printf("digite o preco do %s na loja %s:",produto[i],loja[j]);
                         scanf("%f",&preco[i][j]);
                         }
                         }
       for(i=1;i<=4;i++){
              for(j=1;j<=8;j++){        
                                if(preco[i][j]<120){
                                                   printf("produtos: %s lojas: %s precos %1.2f\n",produto[i],loja[j],preco[i][j]);
                                                   }
                               }
                         }
                         getch();
       } 

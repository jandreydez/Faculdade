#include <conio.h>
#include <stdio.h>
#include <math.h>
#define n 100

main() {
       float media,soma,mat[n][n];
       int i,j,lin,col,count=0;
        
       printf("Digite a quantidade de linhas da matriz\n");
       scanf("%d",&lin);
       printf("Digite a quantidade de colunas da matriz\n");
       scanf("%d",&col);
       while(lin!=col){printf("A quantidade de linhas tem que ser igual a de colunas\n Favor digite novamente\n");
       printf("Digite a quantidade de linhas da matriz\n");
       scanf("%d",&lin);
       printf("Digite a quantidade de colunas da matriz\n");
       scanf("%d",&col);
       }
       for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               printf("digite o primeiro valor: ");
                                               scanf("%f",&mat[i][j]);
                                               }
                           }
       for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               if(i==j){
                                                        soma=soma+mat[i][j];
                                                        count++;
                                                        
                                                        }
                                               }
                           }
       media=soma/count;
       printf("Media dos elementos da diagonal principal e: %1.2f",media);
       
       
       
       getch();
       }

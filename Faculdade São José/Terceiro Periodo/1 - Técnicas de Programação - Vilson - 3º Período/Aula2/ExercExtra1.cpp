#include <conio.h>
#include <stdio.h>
#include <math.h>
#define n 100

main() {
       int i,j,mat[n][n],lin,col,soma,count=0,media;
       
       soma=0;
       
       printf("Digite a quantidade de linhas da matriz");
       scanf("%d",&lin);
       printf("Digite a quantidade de colunas da matriz");
       scanf("%d",&col);
       
       for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               printf("digite o primeiro valor: ");
                                               scanf("%d",&mat[i][j]);
                                               }
                           }
                           printf("Elementos entre 12 e 20\n");
       for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               if((mat[i][j]>12) && (mat[i][j]<20)){
                                               printf(" %d ",mat[i][j]);
                                                                                    }
                                               }
       for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               if(mat[i][j]%2==0){
                                                                  soma=soma+mat[i][j];
                                                                  count++;
                                                                  }
                                                                  
                                               }
                                                                  
                                                                  
                                               
                           }
                           media=soma/count;
                           printf("\nA media dos elementos pares e de: %d",media);
                           getch();
                           }
                           }
       

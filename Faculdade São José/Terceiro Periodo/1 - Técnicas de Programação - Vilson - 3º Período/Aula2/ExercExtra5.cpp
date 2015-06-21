#include<conio.h>
#include<stdio.h>
#include<math.h>

#define n 100

main(){
       int i,j,linM,colM,linN,colN;
       float matM[n][n],matN[n][n],total;
       
       printf("Digite a quantidade de linhas da primeira matriz\n");
       scanf("%d",&linM);
       printf("Digite a quantidade de colunas da primeira matriz\n");
       scanf("%d",&colM);
       printf("Digite a quantidade de linhas da segunda matriz\n");
       scanf("%d",&linN);
       printf("Digite a quantidade de colunas da segunda matriz\n");
       scanf("%d",&colN);
       
       for(i=1;i<=linM;i++){
                           for(j=1;j<=colM;j++){
                                               printf("digite os valores da MATRIZ M: ");
                                               scanf("%f",&matM[i][j]);
                                               }
                           }
       for(j=1;j<=linN;j++){
                           for(i=1;i<=colN;i++){
                                               printf("digite os valores da MATRIZ N: ");
                                               scanf("%f",&matN[i][j]);
                                               }
                           }
       
       for(i=1;i<=linM;i++){
                           for(j=1;j<=colM;j++){
                                                total=matM[i][j]+matN[i][j];
                                                printf("%1.2f ",total);
                                                }
                           }      
                           
                           getch();
       }              
       
                           

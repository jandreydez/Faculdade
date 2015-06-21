#include <conio.h>
#include <math.h>
#include <stdio.h>
#define n 100
main(){
       
       int lin,col,qtd,i,j,mat[n][n],c=0,l=0,maior,menor=999999999;
       
       printf("Digite a quantidade de linhas da matriz");
       scanf("%d",&lin);
       printf("Digite a quantidade de colunas da matriz");
       scanf("%d",&col);
       
       
      
                           
        for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               printf("Digite o valor da matriz:");
                                               scanf("%d",&mat[i][j]);
                                               }
                           }
         for(i=1;i<=lin;i++){
                           
                           for(j=1;j<=col;j++){
                                               if(mat[i][j]>maior){
                                                                 
                                                                 maior=mat[i][j];
                                                                 
                                                                 l=i;
                                                                 c=j;
                                                                 
                                              
                                                                 }
                                               }
                           }         
         
         for(i=1;i<=lin;i++){
                           
                           for(j=1;j<=col;j++){
                                               if(mat[i][j]==maior){
                                                                      l=i;
                                                                      c=j;
                                               printf("Maior valor e %d LINHA %d COLUNA %d\n",maior,l,c);
                          
                                                                   }
                                              }
                          }
        
        for(i=1;i<=lin;i++){
                           
                           for(j=1;j<=col;j++){
                                               if(mat[i][j]<=menor){
                                                                 
                                                                 menor=mat[i][j];
                                                                 l=i;
                                                                 c=j;
                                                                 
                                                               
                                                                 
                                                                   }
                                               }
                           }   
                           printf("\n\n");
                           
        for(i=1;i<=lin;i++){
                           
                           for(j=1;j<=col;j++){
                                               if(mat[i][j]==menor){
                                                                      l=i;
                                                                      c=j;
                                               printf("Menor valor e %d LINHA %d COLUNA %d\n",menor,l,c);
                          
                                                                   }
                                              }
                          }
        
        getch();
        }
        

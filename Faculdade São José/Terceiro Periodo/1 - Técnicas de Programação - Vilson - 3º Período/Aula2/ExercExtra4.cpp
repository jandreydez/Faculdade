#include <conio.h>
#include <stdio.h>
#include <math.h>
#define n 100

main() {
       float media,soma,mat[n][n],maior=0;
       int i,j,lin,col,l;
        
       printf("Digite a quantidade de linhas da matriz\n");
       scanf("%d",&lin);
       printf("Digite a quantidade de colunas da matriz\n");
       scanf("%d",&col);
       
        for(i=1;i<=lin;i++){
                           for(j=1;j<=col;j++){
                                               printf("digite oo valores: ");
                                               scanf("%f",&mat[i][j]);
                                               }
                           }
                           
        for(i=1;i<=lin;i++){
                            for(j=1;j<=col;j++){
                                                if(mat[i][j]>maior){
                                                                    maior=mat[i][j];
                                                                    l=i;                                        
                                                                    }
                                                }                      
                                              
                                               
                            while(i==l){   
                                            for(i=1;i<=lin;i++){
                                                                for(j=1;j<=col;j++){
                                                                                      if(mat[i][j]>maior){
                                                                                                           maior=mat[i][j];
                                                                                                           l=i;                                        
                                                                                                            }
                                                                                      }                      
                                                                  
                                                                for(j=1;j<=col;j++){
                                                                                    mat[i][j]=mat[i][j]*maior;
                                                                                    printf("%1.2f ",mat[i][j]);
                                                                                    }
                                                                   
                                                               }
                            
                          
                                       }             
                           }                            
                           
        
                           
                           getch();
         }
                           
                           
                                                                   

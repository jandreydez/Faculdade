#include <conio.h>
#include <math.h>
#include <stdio.h>
#define n 100

main(){
       int num[n],i,qtd,aux;
       printf("Digite a quantidade de elementos que deseja ler\n");
       scanf("%d",&qtd);
       printf("Digite os valores que desejar\n");
       for(i=1;i<=qtd;i++){
                           scanf("%d",&num[i]);
                           }
       printf("Ordem correta\n");
       for(i=1;i<=qtd;i++){
                           printf("%d\n",num[i]);
                           }
       printf("Ordem Inversa");
       for(i=1;i<=qtd/2;i++){
                           aux=num[qtd-i+1];
                           num[qtd-i+1]=num[i];
                           num[i]=aux;
                           }
       for(i=1;i<=qtd;i++){                            
                            printf("%d",num[i]);
                            }
                         
                            getch();
                            }
                           
        
                           
       

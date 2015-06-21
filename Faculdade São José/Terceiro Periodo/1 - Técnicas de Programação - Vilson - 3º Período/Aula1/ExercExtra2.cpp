#include <conio.h>
#include <math.h>
#include <stdio.h>
#define n 100

main(){
       float a[n],k,b[n];
       int qtd,i;
       
       printf("Digite a quantidade de elementos que deseja\n");
       scanf("%d",&qtd);
       printf("Digite o valor que vai multiplicar:\n");
       scanf("%f",&k);
       printf("Digite os numero, que serao multiplicados:\n");
       
       for(i=1;i<=qtd;i++){
                           scanf("%f",&a[i]);
                           b[i]=a[i]*k;
                          
                           }
       for(i=1;i<=qtd;i++){ 
                            printf("O valor %1.2f X %1.2f = %1.2f\n",a[i],k,b[i]);
                            }
                          getch();
                          }
     
       
       
       
       

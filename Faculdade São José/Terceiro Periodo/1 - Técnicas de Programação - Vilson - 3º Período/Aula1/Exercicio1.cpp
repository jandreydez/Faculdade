#include <conio.h>
#include <math.h>
#include <stdio.h>

main(){
       int nums[100],i,qtd,snums;
       float media;
       
       snums=0;
       printf("Digite a quantidade de numero a ser lido\n");
       scanf("%d",&qtd);
       printf("Digite os Numeros abaixo\n");
       
       for(i=1;i<=qtd;i++){
                           
                           scanf("%d",&nums[i]);
                           snums=snums+nums[i];
                           }
                           media=snums/qtd;
                           printf("Media = %1.2f\n",media);
                           
                           printf("Acima da media\n");
                           
       for(i=1;i<=qtd;i++){
                           if(nums[i]>media){
                                             printf("%d \n",nums[i]);
                                             }
                           }
                           printf("Abaixo da media\n");
        for(i=1;i<=qtd;i++){
                           if(nums[i]<media){
                                             printf("%d \n",nums[i]);
                                             }
                           }
                           printf("Numeros pares\n");
        for(i=1;i<=qtd;i++){
                            if(nums[i]%2==0){
                                            printf("%d \n",nums[i]);
                                            }
                            }
        getch();
        }
                                             

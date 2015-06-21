#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream.h>
#define Nmax 5

main()
{
      int Nums[100],i,qtd,SNums;
      float media;
      scanf("%d",&qtd);
      for(i=0;i<qtd;i++){
                         
                         SNums=SNums+Nums[i];
                         }
      media=SNums/qtd;
      printf("Media: %1.2f\n",media);
      printf("Numeros acima da media\n");
      
      for(i=0;i<qtd;i++){
                         if(Nums[i]>media){
                                           printf(" %d\n",Nums[i]);
                                           }}
      printf("Numero abaixo da media\n");
      for(i=0;i<qtd;i++){  
                         if(Nums[i]<media){
                                           printf("  %d\n",Nums[i]);
                                           }}
      printf("Numeros Pares");
      for(i=0;i<qtd;i++){     
                         if(Nums[i]%2){
                                       printf(" %d\n",Nums[i]);
                                       }}
                                       getch();
                                       }     
      
      
      



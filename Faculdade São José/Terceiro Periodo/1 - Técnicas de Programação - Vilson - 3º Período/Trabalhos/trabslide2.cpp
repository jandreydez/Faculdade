#include <stdio.h>
#include <conio.h>

main()
{
    int i,numero[100],soma,n; 
    float media; 
      
    printf("Quantos numeros voce ira digitar(MAX 100):");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       printf("digite o numero da %d: pessoa:\n",i);
       scanf("%d",&numero);}
    for(i=1;i<=n;i++){
       printf("%d",numero[i]);}
    for(i=1;i<=n;i++)
       soma=soma+numero[i];
       media=soma/n;
       printf("media eh:%1.2f",media);                       
       getch();
                       }
                            

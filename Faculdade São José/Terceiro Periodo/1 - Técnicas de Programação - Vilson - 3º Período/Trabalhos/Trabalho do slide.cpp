#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define TAM 40

main()
{
     float salario[4];
     int i;     
     salario[1]=1000;
     for(i=2;i<=4;i++){
                       printf("digite o salario da %d: pessoa\n",i);
                       scanf("%f",&salario[i]);}
                       for(i=1;i<=4;i++)
                       printf("%1.2f\n",&salario[i]);
                       getch();
                       }
                                         

#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
main()
{ int opcao,mes;
  float novosal,ferias,decterc,sal;
  
  printf("FAVOR SELECIONE A OPÇÃO DESEJADA");
  printf("\nDIGITE: 1-NOVO SALARIO\nDIGITE: 2-FERIAS\nDIGITE: 3-DECIMO TERCEIRO\nDIGITE: 4-SAIR\n");
  scanf("%d",&opcao);
  if(opcao==1){printf("DIGITE SEU NOVO SALARIO\n");
                              scanf("%f",&novosal);
                              if(novosal<=210){
                                               novosal=novosal*1.15;
                                              
                                               printf("Seu salario e de: %1.2f",novosal);
                                              
                                               }                                               
                              if((novosal>210)&&(novosal<=600)){
                                               novosal=novosal*1.10;
                                               printf("Seu salario e de: %1.2f",novosal);}
                              if(novosal>600){
                                               novosal=novosal*1.05;
                                               printf("Seu salario e de: %1.2f",novosal);}
                                               }
if(opcao==2){printf("DIGITE SEU O SEU SALARIO\n");
                              scanf("%f",&ferias);
                              ferias=ferias*1.333333333;
                              printf("O valor de suas ferias e de: %1.2f",ferias);}
if(opcao==3){printf("DIGITE SEU O SEU SALARIO\n");
                              scanf("%f",&sal);
               printf("DIGITE A QUANTIDADE DE MESES TRABALHADA\n");
                              scanf("%d",&mes);                               
                              decterc=sal*mes/12; 
                              printf("SEU DECIMO TERCEIRO SERA DE:%1.2f\n",decterc);   } 
 if(opcao==4){return(0);       } 
                              
                                               getche();}
                                               
                              
                              
  

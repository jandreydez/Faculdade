#include<conio.h>
#include<stdio.h>
#define N 100
       //*Minha Primeira Struct//*
 typedef struct _Ficha{
                int Codigo;
                char Nome[45];
                char Tel[10];
                }Ficha;
 
main(){
       Ficha Cliente[4];
       int i;
       for(i=1;i<=4;i++){
                        printf("Digite o codigo do Cliente: ");
                        scanf("%d",&Cliente[i].Codigo);
                        printf("Digite o nome do Cliente: ");
                        scanf("%s",&Cliente[i].Nome);
                        printf("Digite o telefone do Cliente: ");
                        scanf("%s",&Cliente[i].Tel);
                        }
                        for(i=1;i<=4;i++){
                                          printf("Nome = %s Telefone = %s\n",Cliente[i].Nome,Cliente[i].Tel);
                                          }
                        
                        
                        
                        getch();
                        
       }
            

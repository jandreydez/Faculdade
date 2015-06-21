#include <conio.h>
#include <math.h>
#include <stdio.h>
#define n 10

main(){
       
       int gab[n],resp[n],i,qtd,acerto,continua;
       int maxalter, minalter;
       maxalter=5;//valor maximo da alternativa
       minalter=1;//valor minimo da alternativa
      
       
       printf("Digite a quantidade de questoes que tem a prova\n");
       scanf("%d",&qtd);
       printf("Entre com o Gabarito:\n");
      
       for(i=1;i<=qtd;i++){
                           printf("Questao de numero: %d\n",i);
                           printf("GABARITO: ");
                           scanf("%d",&gab[i]);
                           
                                 while((gab[i]<minalter)||(gab[i]>maxalter)){
                                 printf("Sao aceitos somente valores de 1 a 5\n Por favor digite novamente!\n");
                                 printf("Questao de numero: %d\n",i);
                                 printf("GABARITO: ");
                                 scanf("%d",&gab[i]);
                                                                            }
                                 
                           }
                           
                           
                           do{
                                          
       printf("\nEntre com a Resposta do aluno");
       for(i=1;i<=qtd;i++){
                           printf("\nQuestao de numero: %d\n",i);
                           printf("RESPOSTA: ",i);                           
                           scanf("%d",&resp[i]);
                            while((resp[i]<minalter)||(resp[i]>maxalter)){
                                 printf("Sao aceitos somente valores de 1 a 5\nPor favor digite novamente!\n");
                                 printf("Questao de numero: %d\n",i);
                                 printf("RESPOSTA: ");
                                 scanf("%d",&resp[i]);
                                                                          }
                           printf("GABARITO: %d",gab[i]);
                           }
                           
                           acerto=0;
       for(i=1;i<=qtd;i++){
                           if(gab[i]==resp[i]){
                                               acerto=acerto+1;
                                               }
                        
                         
                           }
                         printf("\n\nO aluno acertou: %d questoes",acerto);
                          printf("\nDeseja continuar?\n 1-SIM \n 2-NAO\n");
                          scanf("%d",&continua);
                           }while(continua==1);
      
                           
                           getch();
                           
                           }
                           
       
       

#include<conio.h>
#include<stdio.h>
#include<string.h>
#define N 100
main() {
       //*Minha Primeira Struct//*
       struct Alunos{
              char nome[50];
              float notamat,notafis,media;
              
              };//*Declara STRUCT e os devidos elementos que nela vão constar//*
              float maiormedia=0;
              char nomemaior[50];
              struct Alunos alunos[N];
              int i,n,nr;
              
              printf("Quantos alunos deseja ler?\n");
              scanf("%d",&n);
                         
              for(i=1;i<=n;i++){
                                fflush(stdin);
                                printf("\nNome do aluno %d: ",i);
                                gets(alunos[i].nome);

                                printf("Nota de matematica: ");
                                scanf("%f", &alunos[i].notamat);

                                printf("Nota de fisica: ");
                                scanf("%f", &alunos[i].notafis);

                                alunos[i].media = (alunos[i].notamat + alunos[i].notafis)/2;
                                }
                                
                                printf("\nExibindo nomes e medias:\n");

              for(i=1;i<=n;i++){
                                printf("\nAluno %d\n",i);
                                printf("Nome: %s\n",alunos[i].nome);
                                printf("Media: %.2f\n",alunos[i].media);
                                if(alunos[i].media>maiormedia){
                                                              nr=i;
                                                              maiormedia=alunos[i].media;
                                                              
                                                            
                                                              
                                                              
                                                             }
                                                              
                                }
                                printf("O aluno: %d\n",nr);
                                printf("Nome: %s\n",nomemaior);
                                printf("Media: %.2f\n",maiormedia);
                                
                                
                                       
    getch();
}                  
              
       
              
       

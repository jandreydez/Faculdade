#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define N 1000
#define rmin 500
#define rmax 5000

typedef struct _Ficha{
        char nome[50];      
        float salario;
        
          
        }Ficha;


int main(){
    Ficha Funcionario[N],aux;  
    int i,qtd,local,r,j;
    float media=0,Msal=0;    
    printf("Quantos funcionarios deseja cadastrar?\n");
    scanf("%d",&qtd);
     
    //leitura dos nomes e salario funcionario, junto com calculo da media salarial//
    srand(time(NULL)); //rotina de inicialização de numeros aleatorios
    for(i=1;i<=qtd;i++){
                        fflush(stdin);
                        printf("Digite o nome do funcionario\n");
                        fgets(Funcionario[i].nome,50,stdin);             
                        
                        printf("!!!Salario Gerado!!!\n");
                        Funcionario[i].salario=rand()%(rmax-rmin+1)+rmin;//função geradora de numeros aleatorios
                        
                        media+=Funcionario[i].salario;
                       }
                       media/=qtd;
                       printf("\nA media salarial e de: R$%.2f\n",media); 
    //calculo funcionarios acima da média     
    printf("\nFuncionario acima da media salarial\n");
    printf("________________________________________________________________________________");                                 
    for(i=1;i<=qtd;i++){
                        if(Funcionario[i].salario>=media){printf("--------------------------------------------------------------------------------");
                                                         printf("Funcionario: %s\nSalario: R$%.2f\n",Funcionario[i].nome,Funcionario[i].salario);
                                                         
                                                         }      
                              
                       }
    printf("________________________________________________________________________________");
    //calculo funcionarios abaixo da média 
    printf("\nFuncionario abaixo da media salarial\n");                  
    for(i=1;i<=qtd;i++){
                        if(Funcionario[i].salario<=media){printf("--------------------------------------------------------------------------------");
                                                         printf("Funcionario: %s\nSalario: R$%.2f\n\n",Funcionario[i].nome,Funcionario[i].salario);
                                                         }      
                              
                       }
    printf("________________________________________________________________________________");
    //calculo funcionario com maior salario   
                                 
    for(i=1;i<=qtd;i++){
                        if(Funcionario[i].salario>Msal){
                                                        Msal=Funcionario[i].salario;
                                                        local=i;
                                                        }      
                              
                       }
   
    printf("O funcionario com maior salario e: %s \nCom o salario de: %.2f\n",Funcionario[local].nome,Funcionario[local].salario);                 
    
	printf("Ordenando alfabeticamente os nomes\n");
	

 	for(i=1; i<=qtd-1; i++){ 						
 				for(j=i+1;j<=qtd;j++){
// 					strcpy(aux,Funcionario[j].nome);
 					if(strcmp(Funcionario[i].nome,Funcionario[j].nome) > 0){
 						aux=Funcionario[i];
 						Funcionario[i]=Funcionario[j];
 						Funcionario[j]=aux;
					 }
 				}
	}	 
 	printf("\n\nNomes em ordem alfabetica: \n");
	for(i = 1; i <=qtd; i++){
 	printf("\n%s",Funcionario[i].nome);
	}
	 getch();
}
    

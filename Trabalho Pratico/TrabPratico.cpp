#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void MenuPrincipal();
void Cadastro();
void save();
void read();
/////////////
void searchmenu();
void search();
void searchall();
#define Max 500

typedef struct{
		int codigo;
		char nome[20];
		int qtd_vendida;
        }Ficha;
        
Ficha venda[Max];
Ficha produto[8];
int resp;
int x,N,i=1,opcao;
int fim=0;
//PROGRAMA PRINCIPAL//
int main(){
	MenuPrincipal();
}
//Menu principal//
void MenuPrincipal(){     
     do
      {
        system("cls");
	    printf("         M E N U   P R I N C I P A L\n");
	    printf("\n1 - Cadastrar venda de um produto\n");
	    printf("\n2 - Pesquisar produtos\n");
	    printf("\n5 - Sair\n");
	    printf("\nEscolha uma das opcoes:");
	    scanf("%d",&opcao);
	    switch (opcao){
             case 1:Cadastro();
                    break;
			 case 2:searchmenu();
			 		break;		                                  
             case 5:fim=1;
                    break;
             default: printf("Opcao invalida\n");
                      getch();
         }
      }while (!(fim));
      printf("Fim do programa");
      exit(0);
}
//rotina de cadastro//
void Cadastro(){	   
	while(i<=Max){	
		system("cls");
		N=i;		
		printf("Digite o Codigo do produto\n");
		scanf("%d",&venda[i].codigo);
		fflush(stdin);
		printf("Digite o Nome do produto\n");
		gets(venda[i].nome);
		fflush(stdin);
		printf("Digite a quantidade vendida\n");
		scanf("%d",&venda[i].qtd_vendida);
		fflush(stdin);		
		printf("\nContinuar (Y/N)");		
		resp = getch();
		fflush(stdin);			
		if(resp=='Y'|| resp =='y'){ 
			i++;
		}
		else{
			save();
			MenuPrincipal();
		}
	}printf("quatidade maxima atingida[500]!!!");	
}

//PESQUISA//
//menu pesquisa//
void searchmenu(){	
	do
      {	system("cls");
		printf("--- P E S Q U I S A ---\n");
		printf("\n1-Produtos\n");
		printf("\n2-Quantidade Total Vendida\n");
		printf("\n5-Voltar ao Menu Principal\n");
		printf("\nEscolha uma das opcoes:");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:search();
			     break;
			case 2:searchall();
				break;	
			case 5:MenuPrincipal();
				 break;				
			 default: printf("Opcao invalida\n");
                      getch();			
		}
	}while (!(fim));
}
//rotina de pesquisa de produtos
void search(){
	system("cls");
	int codigo,a=1;
	printf("Digite o codigo do produto: "); scanf("%d",&codigo);
	printf("Nome  |  Quantidade\n");
	while(a<=N){
		if(codigo == venda[a].codigo){
			printf("%s ",venda[a].nome);
			printf("%d\n",venda[a].qtd_vendida);
		}
		a++;
	}
	printf("Deseja realizar nova pesquisa? (Y/N)");
	resp = getch();
	fflush(stdin);				
	if(resp=='Y' || resp=='y'){
		search();
	}
	else{				
		searchmenu();
	}
}
//rotina pesquisa total//
void searchall(){
	system("cls");
	int soma_qtd = 0;
	int codigo,a=1;
	printf("Digite o codigo do produto: "); scanf("%d",&codigo);
	printf("Nome  |  Quantidade\n");
	while(a<=N){
		if(codigo == venda[a].codigo){
			soma_qtd+=venda[a].qtd_vendida;
		}
		a++;
	}
	for(int b=1;b<=8;b++){
		if(codigo == b){
			produto[b].qtd_vendida = soma_qtd;
			printf("Codigo:%d Quantidade Total:%d\n",b,produto[b].qtd_vendida);
		}
	}
	printf("Deseja realizar nova pesquisa? (Y/N)");
	resp = getch();
	fflush(stdin);				
	if(resp=='Y' || resp=='y'){
		searchall();
	}
	else{				
		searchmenu();
	}	
}
// rotina salvar dados
void save(){
	FILE *arq;
	arq = fopen("Vendas.dat","wb");
	fwrite(&venda,sizeof(Ficha),N,arq);
	fclose(arq);
	printf("\nDados Salvos com SUCESSO!");
}
//rotina ler dados
void read(){
	FILE *arq;
	arq = fopen("Vendas.dat","rb");
	fseek(arq,sizeof(int),SEEK_SET);
	fread(&venda, sizeof(Ficha),N,arq);
	printf("Leitura de dados realizada!\n");
}



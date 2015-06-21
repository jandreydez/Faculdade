
#include <conio.h>

#include <iostream.h>

#include <math.h>

#define rmax 1000

main()

{

      int i,j,r,A[8][25],B[8],h,d;
      int soma,mhora,mdia;

      srand(time(NULL)); //rotina de inicialização de numeros aleatorios

      for(i=1;i<=7;i++)

      {

         for(j=1;j<=24;j++)

             {

               r=rand()%rmax;//função geradora de numeros aleatorios

               A[i][j] = r;

             }

      }

     printf("Quantidades de acessos ocorridos durante a promocao \n");

     for(j=1;j<=24;j++)

      {

         for(i=1;i<=7;i++)

             {

               printf("%5d",A[i][j]);

             }

               printf("\n");

      }
      
      for(i=1;i<=7;i++){
                        soma=0;
                        mhora=0;
                        for(j=1;j<=24;j++){
                                           
                                           soma=soma+A[i][j];
                                           if(A[i][j]>mhora){
                                                             mhora=A[i][j];
                                                             h=j;
                                           
                                                             }
                                           
                                           }
                                           
                                           printf("dia %d hora %d maior acesso %d\n",i,h,mhora);
                                           B[i]=soma;
                                               
                                           }
                              mdia=0;             
      for(i=1;i<=7;i++){
                        
                        
                        if(B[i]>mdia){
                        mdia=B[i];
                        d=i;
                        }
                        
                        }
      printf("dia %d maior acesso %d",d,mdia);


      getch();

}

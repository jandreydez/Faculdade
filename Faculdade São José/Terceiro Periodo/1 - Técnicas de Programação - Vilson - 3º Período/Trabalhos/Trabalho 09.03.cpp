#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream.h>
#define Nmax 10

main()
 {
      int i,r,Q[Nmax],N;
      printf("Gerador de numeros aleatorios 1 a 6\n");
      srand(time(NULL));//rotina de inicializa��o de numeros aleatorios (semente)
      for(i=0;1<Nmax;i++);
      {
                          r = rand();//fun��o geradora de numeros aleat�rios
                          N = r%6+1;
                          Q[i]=N;
      }
      printf("Lista de numeros sorteados\n");
      for(i=0;i<Nmax;i++){
                         printf("Numero %d = %d\n",i,Q(i));}
                         getche();
                         }                  
 
        

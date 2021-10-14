#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int numeros[3][4], a, T;
 
  printf("Digite os numeros para matriz 3 x 4 \n");
  for(int i=0; i<3; i++)
  {
      for(int j=0; j<4; j++)
      {
        scanf("%i", &numeros[i][j]);
      }
  }

  printf("Os numeros digitados na matriz foram: \n");
  for(int i=0; i<3; i++)
  {
      for(int j=0; j<4; j++)
      {
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }

   printf("\nDigite a constante de multiplicao:");
   scanf ("%i", &a);

   printf("\nOs resultados foram:\n ");
  for(int i=0; i<3; i++)
  {
      for(int j=0; j<4; j++)
  {
      T=numeros[i][j]*a;
      printf("%i ", T);
      numeros[i][j]=T;
  }
  printf("\n");
  }
 
  return 0;
}

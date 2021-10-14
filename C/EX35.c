#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int numeros[20], T, a;
  
  printf("Digite os 20 numeros: ");
  for(int i=0; i<20; i++)
  {
    scanf("%i", &numeros[i]);
  }

  printf("\nDigite a constante de multiplicao:");
  scanf ("%i", &a);

  printf("\nOs resultados foram:\n ");
  for(int i=0; i<20; i++)
  {
      T=numeros[i]*a;
      printf("%i*%i=%i\n", numeros[i], a, T);
      numeros[i]=T;
  }

  return 0;
}

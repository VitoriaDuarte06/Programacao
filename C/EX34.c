#include <stdio.h>
 
int main(int argc, char *argv[]){
  
  int b, numeros[10];
  
  printf("Digite os 10 numeros: ");
  for(int i=0; i<10; i++)
  {
      scanf("%i", &numeros[i]);
       if (numeros[i]>b)
       {
        b=numeros[i];
       }
  }
 
printf("O amior numero %i ", b);
  return 0;
}

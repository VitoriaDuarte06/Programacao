#include <stdio.h>
#include <stdlib.h>
 
int main(int arg, char const *argv[])
{
  int a, b;
  printf("Digite o primeiro valor: ");
  scanf("%i", &a);

  printf("Digite o segundo valor: ");
  scanf("%i", &b);

  if (a<b){
  printf ("%i e menor", a);    
  }
  else{
  printf ("%i e menor", b);
  }
 
  return 0;
}
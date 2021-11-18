#include <stdio.h>

int main(int argc, char *argv[])
{
  int x, a, b, i, t;
 
  printf("Digite um numero: ");
  scanf("%i", &x);
 
  while(x <= 0)
  {
    printf("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf("%i", &x);
  }
  printf("Digite o primeiro valor do intervalo: ");
  scanf("%i", &a);
  
  printf("Digite o segundo valor do intervalo: ");
  scanf("%i", &b);
 
  while(b < a)
  {
    printf("Erro! O segundo valor tem que ser maior que o primeiro. Digite novamente: ");
    scanf("%i", &b);
  }

  i=b;
    while(i >= a){
    t = x * i;
    printf("%i x %i = %i\n", x, i, t);
    i = i - 1;
  }
 
  return 0;
}

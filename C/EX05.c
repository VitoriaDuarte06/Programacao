#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char const *argv[])
{
  float c, f;
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &c);
 
  f = c*(1.8)+32;
 
  printf("A temperatura em Fahrenheit e igual a %.2f", f);
 
  return 0;
}
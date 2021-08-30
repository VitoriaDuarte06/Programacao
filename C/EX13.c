#include <stdio.h>
 
int main(int argc, char *argv[]){
  int base, altura, area;
  
  printf("Digite o valor da base: ");
  scanf("%i", &base);
 
  printf("Digite o valor da altura: ");
  scanf("%i", &altura);
 
  area = base*altura;
 
  if (area > 100){
      printf("O terreno possui uma area de %i, e um terreno grande!", area);
  }
  else{
      printf ("O terreno possui uma area de %i, e um terreno pequeno", area);
  }
 
  return 0;
}
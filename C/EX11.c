#include <stdio.h>
 
int main(int argc, char *argv[])
{
  float a, b;
  
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
 
  printf("Digite o segundo valor: ");
  scanf("%f", &b);

 
  if (a==b){
      printf("Sao iguais");
  }
  else if(b>a){
      printf("%.2f e maior", b);
  }
  else{
      printf("%.2f e maior", a);
  }
 
  return 0;
}

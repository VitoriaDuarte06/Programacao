#include <stdio.h>
 
int main(int argc, char *argv[]){
  int a, b, c;
  
  printf("Digite o primeiro valor: ");
  scanf("%i", &a);
 
  printf("Digite o segundo valor: ");
  scanf("%i", &b);
 
  printf("Digite o terceiro valor: ");
  scanf("%i", &c);
 
  if (a > b)
  {
      if (a > c)
      {
          printf ("%i e o maior", a);
      }
      else 
      {
          printf ("%i e o maior", c);
      }
  }
    else if(b > c)
    {
      printf ("%i e o maior", b);
    }
     else
    {
      printf ("%i e o maior", c);
     }
 
  return 0;
}

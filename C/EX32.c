#include <stdio.h>
int main(int argc, char *argv[])
{
  int N, i, t, x, w, z;
z=0;
i=1;
x=1;
w=0;

 printf("Digite o numero de valores: ");
 scanf("%i", &N);

 while ((N <= 0) || (N > 100))
 {
      printf("Erro!Digite o numero de valores, entre 1 e 100: ");
      scanf("%i", &N);
 }
   
  while(z != N)
  {
      t = i+x;
    printf("%i\n", t);
    z = z+1;
    i = i + 2;
    x = t;
    w = t+w;
    
  }

   printf("A soma dos %i termos e : %i", N,w);
  return 0;
}
#include <stdio.h>
int main(int argc, char *argv[])
{
  int n, t;
 
 n = 1;
 t = 0;
 
  while(n <= 100){
    t = n+t;
    n = n+1;
    
  }
printf("A soma dos numeros de um a cem e: %i", t);
  return 0;
}

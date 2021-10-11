#include <stdio.h>
int main(int argc, char *argv[])
{
  int n, i, j, t, x;
n=0;
i=1;
j=1;
x=1;
 
 printf("%i\n", i);
 printf("%i\n", i);
 printf("%i\n", i);
  
  while(n != 17){
      t = j+i+x;
    printf("%i\n", t);
    n = n+1;
    j = i;
    i = x;
    x = t;
    
  }
   
  return 0;
}

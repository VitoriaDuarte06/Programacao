#include <stdio.h>
int main(int argc, char *argv[])
{
  int n, i, j, t;
n=0;
i=1;
j=0;
 
 printf("%i\n", i);
  
  while(n != 29){
      t = j+i;
    printf("%i\n", t);
    n = n+1;
    j = i;
    i = t;
    
  }
   
  return 0;
}

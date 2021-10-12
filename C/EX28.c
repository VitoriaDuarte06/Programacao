#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

 int main (int argc, char const *argv[])
{
 int n, i, t;
 
 n = 1;
 i = 1;

 printf("Precione enter para a primeira tabuada:\n");
 while(n<=20)
    {
      getch();
      while(i<=10)
      {
     t = n*i;
     printf("%i x %i = %i\n",n,i, t);
     i = i+1;
      }
 n = n + 1;   
 i = 1;
 printf("\nPrecione enter para exibir a proxima tabuada:\n");
 
   }

 return 0;
}
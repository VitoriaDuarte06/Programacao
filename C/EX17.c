#include <stdio.h>
 
int main(int argc, char *argv[]){
  int A, B, C;
  
  printf("\n Digite o primeiro valor: ");
  scanf("%i", &A);
 
  printf("Digite o segundo velor: ");
  scanf("%i", &B);
 
  printf("Digite o terceiro valor: ");
  scanf("%i", &C);
 
  if ( A > B )
  {
           if ( A > C )
            {
               if (A*A==((B*B)+(C*C)))
               {
                   printf("Triangulo retangulo!");
               }
               else
                {
                printf("Nao e um triangulo retangulo");  
                }
           }
           else if (C*C==((A*A)+(B*B)))
           {
            printf("Triangulo retangulo!");
           }
            else
            {
             printf("Nao e um triangulo retangulo");     
            }
 }
else if (B > C)
    {
        if (B*B==((A*A)+(C*C)))
        {
         printf("Triangulo retangulo!");  
        }
        else
        {
        printf("Nao e um triangulo retangulo"); 
        }
    }
else if (C*C==((A*A)+(B*B)))
    {
    printf("Triangulo retangulo!");
    } 
    else 
    {
   printf ("Nao e um triangulo retangulo");  
    }
  return 0;
}


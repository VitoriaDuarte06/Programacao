#include <stdio.h>
 
int main(int argc, char *argv[])
{
float P1, P2, MEDIA;
  
  printf("Digite a nota da P1: ");
  scanf("%f", &P1);

  printf("Digite a nota da P2: ");
  scanf("%f", &P2);
 
 MEDIA=((P1+(2*P2))/3);

  if ( MEDIA >= 5 )
  {
     printf("Aluno aprovado com media %.2f", MEDIA); 
  }

   else 
  {
  printf("Aluno reprovado com media %.2f", MEDIA);  
  }
    
  return 0;
}
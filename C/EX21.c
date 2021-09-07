#include <stdio.h>
 
int main(int argc, char *argv[])
{
float P1, P2, MEDIA;
  
  printf("Digite a nota da P1: ");
  scanf("%f", &P1);
 
P2=(15-P1)/2;

  printf("O aluno para ser aprovado precisa tirar na P2 %.2f", P2);  
  
    
  return 0;
}
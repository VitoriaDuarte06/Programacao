#include <stdio.h>
 
int main(int argc, char *argv[]){
  float P, A, IMC;
  char S;
  
  printf("Digite o sexo (exemplo: 1 para masculino e 2 para feminino): ");
  scanf("%c", &S);

  printf("Digite o peso: ");
  scanf("%f", &P);
 
  printf("Digite a altura: ");
  scanf("%f", &A);
 
 IMC=P/(A*A);

  if ( S == 1 )
  {
           if ( IMC < 20 )
            {
               printf("Abaixo do peso!");
            }
            else if (IMC < 25)
                {
                printf("Peso ideal");  
                }
                else 
                {
                printf("Acima do peso!");
                }
  }
else if (IMC < 19)
    {
    printf("Abaixo do peso!");     
    }
    else if (IMC < 24)
    {
    printf("Peso ideal");  
    }
    else
    {
    printf("Acima do peso!");    
    }
  return 0;
}

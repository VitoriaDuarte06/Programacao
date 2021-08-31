#include <stdio.h>
 
int main(int argc, char *argv[]){
  float peso, altura, c;
  
  printf("Digite o seu peso: ");
  scanf("%f", &peso);
 
  printf("Digite a sua altura: ");
  scanf("%f", &altura);
 
  c = peso / (altura*altura);
 
  if (c < 20)
    {
      printf("Abaixo do peso!");
    }
         else if(c < 25)
        {
         printf("Peso ideal");
        }
            else
            {
            printf("Acima do peso!");
            }
 
  return 0;
}

#include <stdio.h>
 
int main(int argc, char *argv[])
{
float a, V0, t, V;
  
  printf("Digite o valor da aceleracao, em m/s*s: ");
  scanf("%f", &a);

  printf("Digite o valor da velocidade inicial, em m/s: ");
  scanf("%f", &V0);
 
  printf("Digite o valor do tempo de percurso, em segundos: ");
  scanf("%f", &t);
 
 V=V0+(a*t);

  if ( V <= 40 )
  {
     printf("Veiculo muito lento!"); 
  }
        else if (V <= 60)
            {
            printf("Velocidade permitida!");  
            }
                else if (V <= 80)
                {
                printf("Velocidade de cruzeiro!");
                }
                    else if (V <= 120)
                    {
                     printf("Veiculo rapido!");     
                    }
                        else 
                        {
                         printf("Veiculo muito rapido!");  
                        }
    
  return 0;
}
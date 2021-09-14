#include <stdio.h>

int main (int argc, char *argv[])
{
int valor;
printf ("Digite um valor positivo: ");
scanf ("%i", &valor);

while (valor<=0)
{
    printf ("Erro! Apenas numeros positivos. Digite novamente: ");
    scanf ("%i", &valor);
}
printf ("O numero %i e positivo, obrigada!", valor);
}
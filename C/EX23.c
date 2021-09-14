#include <stdio.h>

int main (int argc, char *argv[])
{
float A,B;
printf ("Digite o primeiro valor: ");
scanf ("%f", &A);

printf ("Digite o segundo valor: ");
scanf ("%f", &B);

while (B<A)
{
    printf ("Erro! O segundo valor deve ser maior que o primeiro. Digite novamente: ");
    scanf ("%f", &B);
}
printf ("O primeiro valor %.2f e maior que o segundo valor %.2f, obrigada!", A, B);
}
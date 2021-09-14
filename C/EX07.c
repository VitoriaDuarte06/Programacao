#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    float a, b, c, d, e, S, D, T;
    printf ("Digite o valor do primeiro produto: ");
    scanf ("%f", &a);

    printf ("Digite o valor do segundo produto: ");
    scanf ("%f", &b);

    printf ("Digite o valor do terceiro produto: ");
    scanf ("%f", &c);

    printf ("Digite o valor do quarto produto: ");
    scanf ("%f", &d);

    printf ("Digite o valor do quinto produto: ");
    scanf ("%f", &e);

    S=a+b+c+d+e;

    printf ("A soma dos produtos e igual a %.2f", S);

    printf ("Digite o valor de dinheiro entregue: ");
    scanf ("%f", &D);

    T=D-S;

    printf ("O troco a ser entregue e de %.2f", T);

    return 0;
    
}
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
    float c, q, r;
    printf ("Digite o valor da cotacao: ");
    scanf ("%f", &c);

    printf ("Digite a quantidade de dolares: ");
    scanf ("%f", &q);

    r=c*q;

    printf ("A cotacao e de %.2f e a quantidade de colares %.2f correspondem ao valor de %.2f reais", c,q,r);

    return 0;
    
}
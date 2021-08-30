#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, Area;
    printf("Digite o valor da base: ");
    scanf("%i",&b);

    printf("Digite o valor da altura: ");
    scanf("%i",&a);

    Area= a*b;

    printf("A area do retangulo e igual a %i", Area);

    return 0;
}

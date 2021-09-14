#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, area;
    printf("Digite o valor da base: ");
    scanf("%i",&b);

    printf("Digite o valor da altura: ");
    scanf("%i",&a);

    area= (a*b)/2;

    printf("A area do triangulo e igual %i", area);

    return 0;
}

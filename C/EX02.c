#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int l, area;
    printf("Digite o valor da aresta do quadrado: ");
    scanf("%i",&l);

    area= l*l;

    printf("A area do quadrado e igual %i", area);

    return 0;
}

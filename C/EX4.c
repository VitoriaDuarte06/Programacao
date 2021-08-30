#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a, b, c, d, media;
    printf("Digite o primeiro valor: ");
    scanf("%f",&a);

    printf("Digite o segundo valor: ");
    scanf("%f",&b);

    printf("Digite o terceiro valor: ");
    scanf("%f",&c);

    printf("Digite o quarto valor: ");
    scanf("%f",&d);

    media=(a+b+c+d)/4;

    printf("A media e igual a %.2f", media);

    return 0;
}

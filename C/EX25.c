#include <stdio.h>

int main (int argc, char *argv[])
{
int A, T, i;

A = 5;
i = 1;

while (i<=10)
{
    T = A * i;

    printf ("%i x %i = %i\n", A, i, T);
    i = i + 1;

}
}
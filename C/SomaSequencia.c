#include <stdio.h>

float recursivo (float n)
{
    float soma = 0;
    float den = 0;
    for (den = 1; den <= n; den++)
    {
        soma = 1/den + soma;
    }
    return soma;
}

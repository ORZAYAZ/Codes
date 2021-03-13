#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main ()
{
    int N;
    int *X;
    int position;
    int min = INT_MAX;
    scanf("%d",&N);
    X = (int*)malloc(sizeof(int)*N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&X[i]);
    }
    for(int i = 0; i < N; i++)
    {
        if(X[i] < min)
        {
            min = X[i];
            position = i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",position);

    free(X);
    return 0;
}

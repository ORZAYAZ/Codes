#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main ()
{
    int N;
    int *X;
    int min = INT_MAX;
    int max = INT_MIN;
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
        }
        if(X[i] > max)
        {
            max = X[i];
        }
    }
    printf("MAIOR = %d\n",max);
    printf("MENOR = %d\n",min);
    free(X);
    return 0;
}

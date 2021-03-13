#include <stdio.h>
#include <stdlib.h>

void swap ( int *n1, int *n2 )
{
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bubbleSort ( int *array, int n )
{
    int i;
    int j;
    for ( i = 0; i < n; i++ )
    {
        for ( j = 0; j < n-i-1; j++ )
        {
            if (array[j] > array[j+1]) 
            {
                swap(&array[j], &array[j+1]); 
            }
        }
    }
}

void print ( int *array, int n )
{
	int i;
	for ( i = 0; i < n; i++ )
	{
		printf("%d\n",array[i]);
	}
}

int main(void) 
{
    int n = 5;
    int *vetor;
    vetor = (int*)malloc(sizeof(int)*n);
    for ( int i = 0; i < n; i++ )
    {
        scanf("%d",&vetor[i]);
    }
    bubbleSort(vetor, n); 
    print(vetor, n);     
    return 0;
}

#include <stdio.h>

int main ()
{
    int num;
    scanf("%d",&num);
    if (num % 2 == 0)
		{
			if (num > 0)
			{
				printf("PAR e POSITIVO");
			}
			else if (num < 0)
			{
				printf("PAR e NEGATIVO");
			}
			else
			{
				printf("PAR e NEUTRO");
			}
		}
		else
		{
			if (num > 0)
			{
				printf("IMPAR e POSITIVO");
			}
			else
			{
				printf("IMPAR e NEGATIVO");
			}
		}
    return 0;
}

#include <stdio.h>

int main ()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if ( x + y < z || x + z < y || z + y < x )
		{
			printf("NAO FORMA UM TRIANGULO\n");
		}
		else
		{
			if ( x == y && y == z)
			{
				printf("EQUILATERO\n");
			}
			else if ( x != y && y == z || y != y && y == x)
			{
				printf("ISOSCELES\n");
			}
			else
			{
				printf("ESCALENO\n");
			}
		}
    return 0;
}

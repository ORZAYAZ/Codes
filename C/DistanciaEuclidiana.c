#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
    double x1,x2,y1,y2;
    do
	{
		scanf("%lf",&x1);
        scanf("%lf",&y1);
        scanf("%lf",&x2);
        scanf("%lf",&y2);
		double dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		printf("%.2f\n",dist);
	}
	while(!(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0));
    return 0;
}

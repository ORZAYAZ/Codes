#include <stdio.h>

int main () 
{
    int A;
    int B;
    int soma,sub,mult;
    float div,num1,num2;
    scanf("%d",&A);
    scanf("%d",&B);
    soma = A + B;
    sub = A - B;
    mult = A * B; 
    if (A != 0 && B != 0)
    {
        num1 = A;
        num2 = B;
        div = num1 / num2;
        printf("SOMA = %d\n",soma);
        printf("SUBTRACAO = %d\n",sub);
        printf("MULTIPLICACAO = %d\n",mult);
        printf("DIVISAO = %.2f\n", div);
    }
    else if (B == 0)
    {
       printf("SOMA = %d\n",soma);
       printf("SUBTRACAO = %d\n",sub);
       printf("MULTIPLICACAO = %d\n",mult);
       printf("DIVISAO = INDETERMINADO\n"); 
    }  
    return 0;
}

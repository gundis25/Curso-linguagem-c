/******************************************************************************
funçao Abs() 
A função abs em C é usada para obter o valor absoluto de um número inteiro. 
O valor absoluto de um número é sempre positivo — por exemplo, o valor absoluto de -5 é 5, e o de 5 também é 5

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = abs(-10); // retorna 10
    int b = abs(10); // retorna 10
    int x = -10;
    int y = abs(x); // retorna 10
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}

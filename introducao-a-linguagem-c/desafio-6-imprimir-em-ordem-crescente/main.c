/******************************************************************************
6) Dados três números, imprimi-los em ordem crescente.
*******************************************************************************/
#include <stdio.h>

int main()
{
	int n1, n2, n3, temp;
	printf("Digite o valor de n1, n1 e n3: ");
	scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    printf("A ordem crescente dos numeros e: %d, %d, %d\n", n1, n2, n3);

	return 0;
}

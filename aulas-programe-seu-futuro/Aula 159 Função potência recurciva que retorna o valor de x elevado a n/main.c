/******************************************************************************

Aula 159: Implemente uma função recursiva que, dados dois numeros inteiros
x e n, calcula e retorna o valor de x elevado a n.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int n){

    if(n == 0)
        return 1;
    else
        return x * potencia(x, n - 1);
}

        /*Ex: x = 4, n = 3
            Empilhando
            1 n = 3 
            2 n = 2 
            3 n + 1 
                        Desempilhando 
                        3 4 * 1 = 4 
                        2 4 * 4 = 16 
                        1 4 * 16 = 64
        */
int main()
{
    int n, x;
    
    printf("Digite o valor para X e para N: ");
    scanf("%d%d", &x, &n);
    
    printf("Resultado de %d elevado a %d: %d\n", x, n, potencia(x, n));
    

    return 0;
}
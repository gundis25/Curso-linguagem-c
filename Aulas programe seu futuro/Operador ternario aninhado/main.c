/******************************************************************************

Aula 45: Operador ternario aninhado
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 10 ;
    
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    printf("Operador ternario:\n");
    
    a < 0 ? printf("\n\tValor negativo!\n") :
        a > 0 ? printf("\n\tValor positivo!\n") : printf("\n\tValor igual a zero!\n");
    return 0;       
}        
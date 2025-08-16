/******************************************************************************

Aula 40: Decisão sumples
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 10 ;
    
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    if(a < 0)
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a 0!\n");
        
    printf("\nContinuação do programa...\n");  

    return 0;
}

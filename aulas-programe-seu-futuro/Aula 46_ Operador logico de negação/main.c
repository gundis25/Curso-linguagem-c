/******************************************************************************

Aula 46: Operador logico de negação
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10 ;
    
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    printf("Operador ternario:\n");
    !(a < 0)? printf("\n\tValor positivo ou igual a 0!\n") : printf("\n\tValor negativo!\n");
    
    printf("\n\nif/else\n");
    if(!(a < 0)){
        printf("\n\tValor positivo ou igual a 0\n");
        printf("\n\t***Valor positivo ou igual a 0!***\n");
    }else{
        printf("\n\tValor negativo!\n");
        printf("\n\t***Valor negativo!***\n");
    }    
    printf("\nContinuação do programa...\n");  

    return 0;
}

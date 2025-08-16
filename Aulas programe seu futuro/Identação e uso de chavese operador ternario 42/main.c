/******************************************************************************

Aula 42 e 43: Operador ternario
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 10 ;
    
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    printf("Operador ternario:\n");
    a < 0? printf("\n\tValor negativo!\n") : printf("\n\tValor positivo ou igual a 0!\n");
    
    printf("\n\nif/else\n");
    if(a < 0){
        printf("\n\tValor negativo!\n");
        printf("\n\t***Valor negativo!***\n");
    }else{
        printf("\n\tValor positivo ou igual a 0!\n");
        printf("\n\t***Valor positivo ou igual a 0!***\n");
    }    
    printf("\nContinuação do programa...\n");  

    return 0;
}

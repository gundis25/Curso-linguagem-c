/******************************************************************************

Aula 49 Else if encadeados
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a ;
    
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    
    
    if(a < 0)
        printf("\n\tValor negativo!\n");
       
    else if(a > 0)
        printf("\n\tValor positivo!\n");
        
    else
        printf("\n\tValor igual a 0!\n");
        
   

    return 0;
}
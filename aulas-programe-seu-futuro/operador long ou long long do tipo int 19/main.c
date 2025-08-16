/******************************************************************************
                            aula 19
                    operador long ou long long para o tipo int
                    %li ou %ld
******************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int x = 2147483647;
    
    long long int y = 2147483647;
    
    printf("tamanho do x em bytes: %li\n\n", sizeof x);
     //No windows geralmente um long vai ocupar 4 bytes  
    
    printf("Valor de X: %ld\n", x);
    x++;
    printf("Valor de x: %ld\n\n", x);
   
    printf("Valor de y: %lld\n", y);
    y++;
    printf("Valor de y: %lld\n", y);
    
    return 0;
}

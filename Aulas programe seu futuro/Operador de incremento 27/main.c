/******************************************************************************
Aula 27
Operador de incremento ++

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resultado, contador = 10;
    
    //sinônimas
    //contador++;
    //contador += 1;
    //cintador = contador + 1
    
    resultado = ++contador;
    
    printf("Valor: %d\n", resultado);
    
    resultado = contador++;
    
    printf("Valor: %d\n", resultado++);
    printf("Valor: %d\n", resultado);
    return 0;

}    
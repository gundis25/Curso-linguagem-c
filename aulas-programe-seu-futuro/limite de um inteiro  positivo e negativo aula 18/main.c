/******************************************************************************
                            aula 18
                    tamhanho de int na memoria 
                    intervalo : -2.147.483.648    2.147.483.647
                    %bi ou %d
******************************************************************************************************************/
#include <stdio.h>

int main()
{
    //Valor máximo positivo que um int de 32 bits pode armazenar.
    int x = 2147483647; 
    
    //Valor mínimo negativo que um int de 32 bits pode armazenar.
    int y = -2147483648
    printf("Valor de x: %d\n", x);
    
    //Incrementa o valor de x fazendo com que ocorra um transbordo (overflow)
    x++; 
    printf("Valor de x: %d\n", x);
    
    printf("Valor de y: %d\n", y);
    
    //Decrementa o valor de y fazendo com que ocorra um  sub-transbordo (underflow)
    y--;
    printf("Valor de y: %d\n", y);
    return 0;
}

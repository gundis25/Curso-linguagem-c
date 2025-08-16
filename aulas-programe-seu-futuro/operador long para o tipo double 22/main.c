/*
Aula 22
Operador long para o tipo double
double -> %lf 
long double -> %Lf
__mingw_printf();No windows 32 bits deve-se usar esta função para ser mostrado o valor no console
*/

#include <stdio.h>

int main()
{
    
   long double y = 3.14155896587458962548;
    printf("Valor de y: %.15Lf\n", y);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof y);
    
    
    
    

    return 0;
}
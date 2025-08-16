/*
Aula 21 
Tipo double
%lf
O tipo double é usado onde se precise de uma maior precisao nos calculos
*/

#include <stdio.h>

int main()
{
    
    double y = 3.14155896587458962548;
    printf("Um double precisa de %d bytes de memoria.\n", sizeof y);
    printf("Um double precisa de %d bytes de memoria.\n", sizeof (double));

    return 0;
}
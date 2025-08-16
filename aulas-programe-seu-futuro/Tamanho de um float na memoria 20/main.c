/*
Aula 20 
Tamanho de um float na memoria
%f
*/

#include <stdio.h>

int main()
{
    float x = 3.1415;
    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);
    printf("Um float precisa de %d bytes de memoria.\n", sizeof (int));

    return 0;
}
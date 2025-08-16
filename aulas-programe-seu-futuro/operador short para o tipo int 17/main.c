
#include <stdio.h>
#include <stdlib.h>
/*
operador short para o tipo int
intervalo; -32.768 até 32.3276
%hi ou %d
*/
int main(){
    int y = 0;
    short int x = 32767;
    printf("Tamanho de um int na memoria: %d bytes\n", sizeof y);
    printf("Tamanho em memoria de short int: %d bytes\n", sizeof x);
    
    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x);
    // O sizeof (Tamanho de int)é um operador e nao uma funçao
    //4 * 8 = 32 bits
    //short bite 2 * 8 = 16 bits 

    return 0;
}
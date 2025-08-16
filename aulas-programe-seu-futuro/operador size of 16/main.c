/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float x = 1.0;
    printf("Tamanho de um float na memoria: %d bytes\n", sizeof x);
    printf("Tamanho em memoria de int: %d bytes\n", sizeof(int));
    // O sizeof é um operador e nao uma funçao
    //4 * 8 = 32 bits

    return 0;
}
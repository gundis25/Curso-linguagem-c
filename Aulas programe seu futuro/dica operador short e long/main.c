/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 387;
    short int b = 875;
    long int c = 75647586;
    long long int d = 75647586;
    //Em algumas arquiteturas o long vem  8 bytes de memoria no window é 4  4
    printf("Tamanho de a: %d\n", sizeof (a));
    printf("Tamanho de b: %d\n", sizeof (b));
    printf("Tamanho de c: %d\n", sizeof (c));
    printf("Tamanho de e: %d\n", sizeof (d));
    
    return 0;
}
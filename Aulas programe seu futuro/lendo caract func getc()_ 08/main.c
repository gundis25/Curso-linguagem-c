/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("digite um caracter: " );
    letra = getc(stdin);//A função getc lê um único caractere, mesmo que o usuário digite vários caracteres.
    printf("Caracter lido: %c\n", letra);

    return 0;
}

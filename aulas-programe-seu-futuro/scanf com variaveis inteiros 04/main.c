/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor, valor2;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    printf("""\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n ",valor, valor2);
    printf("\n Precione qualquer tecla para finalizar.");
    getchar();

    return 0;
}

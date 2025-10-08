/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    int i = numero - 1;
    
    while(i >= 1){
        numero = numero * i;
        i--;
    }
    
    printf("Fatorial = %d", numero);

    return 0;
}

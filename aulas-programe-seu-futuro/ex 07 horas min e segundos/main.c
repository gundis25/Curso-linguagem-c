/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor, horas, minutos, segundos;
    printf("Digite o valor em segundos: ");
    scanf("%d", &valor);
    
    horas = valor / 3600;
    minutos = (valor % 3600) / 60;
    segundos = valor % 60;
    
    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}

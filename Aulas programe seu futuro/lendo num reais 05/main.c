/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*
                Aula 5
                lendo numeros reais
*/
int main()
{
   float numero = 3.1415;
   printf("valor da minha variavel: %.2f\n", numero);
   
   printf("Digite um numero real: ");
   scanf("%f", &numero);
   
   printf("Valor lido: %.3f", numero);

    return 0;
}

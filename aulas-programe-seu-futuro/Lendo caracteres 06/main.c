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
   char sexo = 'K';
   printf("Valor da variavel sexo: %c\n", sexo);
   
   printf("Digite seu sexo: (f, F, m, M): ");
   scanf("%c", &sexo);
   
   printf("Valor da variavel sexo: %C\n", sexo);

    return 0;
}

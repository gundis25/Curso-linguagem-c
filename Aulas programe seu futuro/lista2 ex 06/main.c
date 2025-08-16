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
    int numero;
    
    printf("Digite o numero referente ao mês: ");
    scanf("%i" ,&numero);
        
    switch(numero)
    {
        case 1:
            printf("\nJaneiro");
            break;
        case 2:
            printf("\nFevereiro");
            break;
        case 3:
            printf("\nMarço");
            break;
        case 4:
            printf("\nAbril");
            break;
        case 5:
            printf("\nMaio");
            break;
        case 6:
            printf("\nJunho");
            break;
        case 7:
            printf("\nJulho");
            break;
        case 8:
            printf("\nAgosto");
            break;
        case 9:
            printf("\nSetembro");
            break;
        case 10:
            printf("\nOutubro");
            break;
        case 11:
            printf("\nNovembro");
            break;
        case 12:
            printf("\nDezembro");
            break;
        default:
            printf("\nMês invalido");
            break;
    }
    
    return 0;
}

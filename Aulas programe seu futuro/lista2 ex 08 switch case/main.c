/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes;
    printf("Digite o mes desejado: ");
    scanf("%d", &mes);
    
    printf("\n");
    
    switch(mes)
    {
        case 1:
            printf("O Janeiro tem 31 dias.");
            break;
        case 2:
            printf("O fevereira tem 28 dias.");
            break;
        case 3:
            printf("O Março tem 31 dias.");
            break;
        case 4:
            printf("O Abril tem 30 dias.");
            break;
        case 5:
            printf("O Maio tem 31 dias.");
            break;
        case 6:
            printf("O Junho tem 30 dias.");
            break;
        case 7:
            printf("O Julho tem 31 dias.");
            break;
        case 8:
            printf("O Agosto tem 31 dias.");
            break;
        case 9:
            printf("O Setembro tem 30 dias.");
            break;
        case 10:
            printf("O Outubro tem 31 dias.");
            break;
        case 11:
            printf("O Novembro tem 30 dias.");
            break;
        case 12:
            printf("O Dezembro tem 31 dias.");
            break;
        default:
            printf("Digito invalido!");
            break;
    }        

    return 0;
}

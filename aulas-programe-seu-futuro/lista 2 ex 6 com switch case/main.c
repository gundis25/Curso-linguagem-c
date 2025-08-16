/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes;
    printf("Digite o mẽs desejado: ");
    scanf("%d", &mes);
    printf("\n");
    switch(mes)
    {
        case 1:
            printf("Janeiro.");
            break;
        case 2:
            printf("Fevereiro.");
            break;
        case 3:
            printf("Março.");
            break;
        case 4:
            printf("Abriu.");
            break;
        case 5:;
            printf("Maio.");
            break;
        case 6:
            printf("Junho.");
            break;
        case 7:
            printf("Julho.");
            break;
        case 8:
            printf("Agosto.");
            break;
        case 9:
            printf("Setembro.");
            break;
        case 10:
            printf("Outubro.");
            break;
        case 11:
            printf("Novembro.");
            break;
        case 12:
            printf("Dezembro.");
            break;
        default:
            printf("O numero digitado não é um mes válido!");
    }        

    return 0;
}
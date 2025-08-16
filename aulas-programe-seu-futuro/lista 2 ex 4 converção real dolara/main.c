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
    int opcao;
    double valor, converter;
    
    printf("******Converção Real dolar/Dolar Real******\n\n");
    
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &converter);
    
    printf("\n1 = converter Dolar para Real.\n2 = converter Real para dolar.\n");
    scanf("%d", &opcao);
    
    switch(opcao){
    case 1:
        valor = converter * 5.30;
        printf("Valor convertido = R$ %.2lf", valor);
        break;
    case 2:
        valor = converter / 5.30;
        printf("Valor convertido = $ %.2lf", valor);
        break;
    default:
        printf("Opção invalida!");
    }
    
    return 0;
}

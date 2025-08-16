/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>


int main()
{
    float real = 0;
    float taxcambio = 5.71;
    float conversao = 0;
    
    printf("Digite o valor em reais que deseja converter para dolar: ");
    scanf("%f", &real);
    
    conversao =  real / taxcambio;
    printf("\nO valor convertido para dolar é de %.2f", conversao );
    return 0;
}

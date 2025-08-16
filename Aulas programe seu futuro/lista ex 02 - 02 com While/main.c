/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 0;
    int N = 0;
    int positivo = 0;
    int negativo = 0;
    while(i < 5){
        printf("DIgite um numero inteiro: ");
        scanf("%d", &N);
        
        if(N > 0){
            positivo = positivo + 1;
        }
        else{
            negativo = negativo + 1;
        }

    i++;    
    }
    
    printf("Quantidade de numeros positivos : %d", positivo);
    printf("\nQuantidade de numeros negativos : %d", negativo);
    
    return 0;
}

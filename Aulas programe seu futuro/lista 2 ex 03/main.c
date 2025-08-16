/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Digite um numero inteiro: ");
    scanf("%d", &N);
    
    /*if(N % 2 == 0){
        printf("O numero %d é divisivel por 2", N);
    }
    else if(N % 3 == 0){
        printf("O numero %d é divisivel por 3", N);    
    }
    else if(N % 5 == 0){
        printf("O numero %d é divisivel por 5", N);
    }
    else{
        printf("O numero %d não é divisivel por 2, 3 e nem por 5", N);
    }
    */
    
    if(N % 2 == 0 || N %3 == 0 || N % 5 == 0)
        printf("É divisivel por 2, 3, 5.\n");
    else
        printf("Não é divisivel 2, 3, 4.\n");
        
    return 0;
}
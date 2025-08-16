/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    printf("Digite um caractere: ");
    letra = fgetc(stdin);
    /*
    fgetc(): É uma função da biblioteca padrão de entrada e saída (stdio.h) do C.
    Sua função é ler um caractere de um fluxo de entrada.
    stdin: É um ponteiro para o fluxo de entrada padrão, que normalmente está conectado ao teclado.
    */
    
    printf("Caractere lido: %c\n", letra); 
    
    return 0;
}

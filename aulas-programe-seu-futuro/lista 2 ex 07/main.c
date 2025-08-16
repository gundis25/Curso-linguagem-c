/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
    void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    }
int main()
{
    char letra;
    
    printf("Digite uma letra: ");
    scanf("%c" ,&letra);
        
    switch(letra)
    {
        case 'A':
            printf("\nVogal");
            break;
        case 'E':
            printf("\nvogal");
            break;
        case 'I':
            printf("\nvogal");
            break;
        case 'O':
            printf("\nvoga");
            break;
        case 'U':
            printf("\nvogal");
            break;
        default:
            printf("\nA letra é uma consoante");
            break;
    }
    
    char letra1;
    
    printf("\nDigite uma letra: ");
    limpar_entrada();
    scanf("%c" ,&letra1);
    
    if(letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u'){
        printf("A letra é uma vogal!");
        
    }else{
        printf("A letra é uma consoante!");
    }
    
    
    return 0;
}



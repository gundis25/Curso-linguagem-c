/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    switch(letra)
    {
        case 'a':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'e':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'i':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'o':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'u':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'A':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'E':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'I':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'O':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        case 'U':
            printf("A letra '%c' é uma vogal.", letra);
            break;
        default:
            printf("A letra '%c' é uma consoante.", letra);
            break;
    }    

    return 0;
}

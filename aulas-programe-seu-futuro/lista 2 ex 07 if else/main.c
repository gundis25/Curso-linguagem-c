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
    
    
    if( letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        
        printf("\nA letra  '%c' é uma vogal.", letra);
    
    }else{
         printf("\nA letra  '%c' é uma consoante.", letra);
     }   
        
    
        

    return 0;
}

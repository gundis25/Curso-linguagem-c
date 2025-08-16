/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    char tipo_media;
    
    printf("\nDigite 'A'/'a' para calcular a média aritmética ou 'P'/'p' para média ponderada: ");
    scanf("%c", &tipo_media);
    
    if(tipo_media == 'a' || tipo_media == 'A' || tipo_media == 'p' || tipo_media == 'P'){
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
    }
    
    if(tipo_media == 'a' || tipo_media == 'A'){
        printf("\nA média aritimética é %.2f.", (nota1 + nota2 + nota3) / 3);    
    }else if(tipo_media == 'p' || tipo_media == 'P'){
        printf("\nA média ponderada é %.2f.", (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10);
    }
    else{
        printf("\nOpção inválida!");
    }
        
    

    return 0;
}
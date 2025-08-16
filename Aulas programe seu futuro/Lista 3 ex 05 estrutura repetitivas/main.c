/******************************************************************************

5) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    
    do{
        printf("DIGITE A NOTA DA AV1: ");
        scanf("%f", &nota1);
        if(nota1 <= 0 || nota1 > 10)
            printf("Nota inválida!\ndigite novamete.\n");
    }while(nota1 <= 0 || nota1 > 10);
    
    do{
        printf("DIGITE A NOTA DA AV2: ");
        scanf("%f", &nota2);
        if(nota2 < 0 || nota2 > 10)
            printf("Nota inválida!\ndigite novamete.\n");
    }while(nota2 < 0 || nota2 > 10);
    
    media = (nota1 + nota2) / 2;
    
    printf("Nota semestral = %.2f", media);
    
    return 0;
}
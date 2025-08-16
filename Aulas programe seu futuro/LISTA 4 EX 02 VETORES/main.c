/******************************************************************************
2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int vet1[5], vet2[5], vet3[5];
    
    for(i = 0; i <= 4; i++){
        printf("Digite o valor da posição %d do vetor 1: ", i);
        scanf("%d", &vet1[i]);
        printf("Digite o valor da posição %d do vetor 2: ", i);
        scanf("%d", &vet2[i]);
    }
    printf("\n");
    for(i = 0; i <= 4; i++)
        vet3[i] = vet1[i] + vet2[i];
        
    for(i =0; i <= 4; i++)
        printf("%3d", vet1[i]);
    
    printf("\n");
    for(i =0; i <= 4; i++)
        printf("%3d", vet2[i]);
        
    printf("\n");
    for(i =0; i <= 4; i++)
    printf("%3d", vet3[i]);
     
    

    return 0;
}
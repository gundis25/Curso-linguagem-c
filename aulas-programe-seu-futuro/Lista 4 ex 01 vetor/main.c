/******************************************************************************

1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. 
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int vet1[10];
    int vet2[10];
    
    for(i = 0; i <= 9; i++){
        printf("Digite o valor da posição %d : ", i);
        scanf("%d", &vet1[i]);
    }
    
    for(i = 0; i <= 9; i++)
        vet2[i] = vet1[i] * vet1[i];
    
    printf("\nVetor 1: "); 
    for(i = 0; i <= 9; i++)
        printf("%3d ", vet1[i]);
        
    printf("\nVetor 2: "); 
    for(i = 0; i <= 9; i++)
        printf("%3d ", vet2[i]);
    
    return 0;
}

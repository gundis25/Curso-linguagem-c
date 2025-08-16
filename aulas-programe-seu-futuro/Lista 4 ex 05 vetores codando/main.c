/******************************************************************************
5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*******************************************************************************/
#include <stdio.h>
void limpar_entrada() { 
    char c; 
    while ((c = getchar()) != '\n' && c != EOF) {} 
}
int main()

{
    int i;
    float temp[12],m;
    char mes[12], mesMaior, mesMenor;
    
    for(i = 0; i <= 11; i++){
        printf("Digite o mês correspondente: ");
        scanf("%c", &mes[i]);
        limpar_entrada();
    
        printf("Digite a temperatura média: ");
        scanf("%f", &temp[i]);
    }
    
    float maiorTemp = 0;
    for(i = 0; i <= 11; i++){
        if(temp[i] > maiorTemp){
            maiorTemp = temp[i];
            mesMaior = mes[i];
        }
    }
    
    float menorTemp = 100;
    for(i = 0; i <= 11; i++){
        if(temp[i] < menorTemp){
            menorTemp = temp[i];
            mesMenor = mes[i];
        }
    }
    printf("Maior temperatura: %.2f \nMês: %c", maiorTemp, mesMaior);
    printf("Menor temperatura: %.2f \nMês: %c", menorTemp, mesMenor);
    
    return 0;
}
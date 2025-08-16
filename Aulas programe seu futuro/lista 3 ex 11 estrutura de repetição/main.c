/******************************************************************************
11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a 
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float massaInicial, tempo = 0.0;
    int tempoDecorridoSegundos = 0;
    int horas, minutos, segundos;
    
    printf("Digite a massa inicial do material :");
    scanf("%f", &massaInicial);
   
    while(massaInicial >= 0.05){
        massaInicial = massaInicial / 2;
        tempo += 50.0;
    }
    
    tempoDecorridoSegundos = (int)tempo; // Converte para inteiro para cálculos de tempo

    horas = tempoDecorridoSegundos / 3600;
    minutos = (tempoDecorridoSegundos % 3600) / 60;
    segundos = tempoDecorridoSegundos % 60;

    printf("Massa final: %.6f gramas\n", massaInicial);
    printf("Tempo decorrido: %d segundos\n", tempoDecorridoSegundos);
    printf("Tempo decorrido: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
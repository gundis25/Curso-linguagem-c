/******************************************************************************
5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()

{
    int i;
    float temp[12];
    char mes1[12], mes2[12], mesMaior, mesMenor;
    
    for(i = 1; i <= 12; i++){
        switch(i){
            case 1:
                printf("Digite a temperatura do mẽs de janeiro: ");
                scanf("%f", &temp[i]);
                break;
            case 2:
                printf("Digite a temperatura do mẽs de fevereiro: ");
                scanf("%f", &temp[i]);
                break;
            case 3:
                printf("Digite a temperatura do mẽs de março: ");
                scanf("%f", &temp[i]);
                break;
            case 4:
                printf("Digite a temperatura do mẽs de abriu: ");
                scanf("%f", &temp[i]);
                break;
            case 5:
                printf("Digite a temperatura do mẽs de maio: ");
                scanf("%f", &temp[i]);
                break;
            case 6:
                printf("Digite a temperatura do mẽs de junho: ");
                scanf("%f", &temp[i]);
                break;
            case 7:
                printf("Digite a temperatura do mẽs de julho: ");
                scanf("%f", &temp[i]);
                break;
            case 8:
                printf("Digite a temperatura do mẽs de agosto: ");
                scanf("%f", &temp[i]);
                break;
            case 9:
                printf("Digite a temperatura do mẽs de setembro: ");
                scanf("%f", &temp[i]);
                break;
            case 10:
                printf("Digite a temperatura do mẽs de outubro: ");
                scanf("%f", &temp[i]);
                break;
            case 11:
                printf("Digite a temperatura do mẽs de novembro: ");
                scanf("%f", &temp[i]);
                break;
            case 12:
                printf("Digite a temperatura do mẽs de dezembro: ");
                scanf("%f", &temp[i]);
                break;
            }
            
        }
    printf("\n");
    float maiorTemp = 0;
    for(i = 1; i <= 12; i++){
        if(temp[i] > maiorTemp){
            maiorTemp = temp[i];
            mesMaior = i;
        }
    }
    
     switch(mesMaior){
                case 1:
                    strcpy(mes1, "Janeiro");
                    break;
                case 2:
                    strcpy(mes1, "fevereiro");
                    break;
                case 3:
                    strcpy(mes1, "março");
                    break;
                case 4:
                    strcpy(mes1, "Abriu");
                    break;
                case 5:
                    strcpy(mes1, "maio");
                    break;
                case 6:
                    strcpy(mes1, "Junho");
                    break;
                case 7:
                    strcpy(mes1, "Julho");
                    break;
                case 8:
                    strcpy(mes1, "Agosto");
                    break;
                case 9:
                    strcpy(mes1, "Setembro");
                    break;
                case 10:
                    strcpy(mes1, "Outubro");
                    break;
                case 11:
                    strcpy(mes1, "Novembro");
                    break;
                case 12:
                    strcpy(mes1, "Dezembro");
                    break;
            
            }
            
    printf("Maior temperatura: %.2f \nMês: %s", maiorTemp, mes1);        
    
    float menorTemp = 100;
    for(i = 1; i <= 12; i++){
        if(temp[i] < menorTemp){
            menorTemp = temp[i];
            mesMenor = i;
        }
    }
    
    switch(mesMenor){
                case 1:
                    strcpy(mes2, "Janeiro");
                    break;
                case 2:
                    strcpy(mes2, "fevereiro");
                    break;
                case 3:
                    strcpy(mes2, "março");
                    break;
                case 4:
                    strcpy(mes2, "Abriu");
                    break;
                case 5:
                    strcpy(mes2, "maio");
                    break;
                case 6:
                    strcpy(mes2, "Junho");
                    break;
                case 7:
                    strcpy(mes2, "Julho");
                    break;
                case 8:
                    strcpy(mes2, "Agosto");
                    break;
                case 9:
                    strcpy(mes2, "Setembro");
                    break;
                case 10:
                    strcpy(mes2, "Outubro");
                    break;
                case 11:
                    strcpy(mes2, "Novembro");
                    break;
                case 12:
                    strcpy(mes2, "Dezembro");
                    break;
            
            }
    
    printf("\n\nMenor temperatura: %.2f \nMês: %s", menorTemp, mes2);
    
    return 0;
}
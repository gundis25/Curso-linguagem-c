#include<stdio.h>
//) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

int main()
{
    /*int n1,n2,n3, maior, menor;
    
    printf("Digite o valor o 1° numero: ");
    scanf("%d", &n1);
    printf("\nDigite o valor o 2° numero: ");
    scanf("%d", &n2);
    printf("\nigite o valor o 3° numero: ");
    scanf("%d", &n3);
    
    if(n1 > n2 && n1 > n3){
        maior = n1;
    }else if(n2 > n1 && n2 > n3){
        maior = n2;
    }
    else{
        maior = n3;
    }    
    if(n1 < n2 && n1 < n3){
        menor = n1;
    }else if(n2 < n1 && n2 < n3){
        menor = n2;
    }
    else{
        menor = n3;
    }  
    printf("\nMaior numero = %d", maior);
    printf("\nMenor numero = %d", menor);
    */
   
    int a, b, c, menor, maior;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    /* segunda versão
        variáveis menor e maior são inicializadas com o primeiro valor
    */
    menor = a;
    maior = a;

    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;

    printf("Segunda versao\tMenor: %d\tMaior: %d\n", menor, maior);

    return 0;
    
}  


 

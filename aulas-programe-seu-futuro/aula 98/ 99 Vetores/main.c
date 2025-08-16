/******************************************************************************
Vetores(arrays unidimensionais).
Um vetor é uma conjunto de elementos do mesmo tipo (homogenio) armazenados de forma 
sequencial na mconjunt
um indice pe usado para acessar cada elemento do vetor.
 0  1  2  3  4  5  6  7  8  9 
15 37 19 73 81 24 66 92 17 22
*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade;
    char sexo;
    float n1;
    
    int num1[10];// vetor de 10 posições
    int num2[] = {1,5,9,15,43};// vetor de 5 posições
    int num3[5] = {4,7,5};// vetor de cinco posições as demais posições são preenchidas com zero
    int num4[5] = {1,2,3,4,5,60};// vetor de 5 posições os valores exedentes serão perdidos
    int num5[5] = {0};//todo o vetor será preenchido por zero
    
    char letras[100];//vetor com 100 posiçoes
    char vogais[5] = {'a','e','i','o'}// nos vetores de char as letras devem ser envolvidos pos aspas simples
    
    float notas[3] = {7.5,8.3,9.5};
    return 0;
}

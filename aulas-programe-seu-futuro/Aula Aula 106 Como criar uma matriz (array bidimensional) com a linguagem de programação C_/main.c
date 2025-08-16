/******************************************************************************
Aula 106
Como criar uma matriz (array bidimensional) com a linguagem de programação C?

*******************************************************************************/
#include <stdio.h>

int main()
{
    // matriz de inteiros 3 por 3 com 9 elementos
    int mat[3][3] = {1,2,3,4,5,6,7,8,9};
    
    // matriz de inteiros 3 por 3 com 7 elementos
    int mat[][3] = {1,2,3,4,5,6,7};
    
    // matriz 3 por 3 preenchida com zero
    int mat[3][3] = {0};
    
    // matriz do tipo float com cinco linhas e cinco colunas
    float mat2[5][5];
    
    // matriz de caracteres (tipo char) com 10 linhas e 15 colunas
    char mat3[10][15];
    
    return 0;
}
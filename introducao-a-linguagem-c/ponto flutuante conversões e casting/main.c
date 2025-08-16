/*
    Declaração de variaveis bouble com ponto flutuante
    Conversões e casting
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c = 3;
    double d = 2.0;//
    double f = c / d;
    printf("%.1f\n", f);//O compilador ler os dados da dieita para esquerda por isso temos que declarar a variaves
    //com ponto flutuante
    
    
    int a = 3;
    int b = 2;
    double resultado = (double)a / (double)b;
    
    printf("%.1f", resultado);

    return 0;
}
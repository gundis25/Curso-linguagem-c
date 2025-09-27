/******************************************************************************
Crie uma função que receba três valores, 'a', 'b' e 'c', que são os 
coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
*******************************************************************************/
#include <stdio.h>
#include <math.h>

float delta(float x, float y, float z){
    
    return pow(y , 2) - 4 * x * z;
}    

int main()
{
    
    float a, b, c;
    
    printf("***********Calculando o valor de Delta**************\n\n");
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C: ");
    scanf("%f", &c);
    
    printf("\nO valor de delta é %.2f", delta(a, b, c));
    
    return 0;
}

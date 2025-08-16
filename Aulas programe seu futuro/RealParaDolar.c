#include <stdio.h>
#include <stdio.h>


int main()
{
    float real = 0;
    float taxcambio = 5.71;
    float conversao = 0;
    
    printf("Digite o valor em reais que deseja converter para dolar: ");
    scanf("%f", &real);
    
    conversao =  real / taxcambio;
    printf("\nO valor convertido para dolar eh de %.2f\n\n", conversao );
    return 0;
}

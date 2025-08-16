/******************************************************************************
20) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
long long int %d -> %lld ou lli
long double %lf -> %lf
_mingw_printf(); função do nucleo do compilador GCC para imprimir numeros grandes no windows
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int i, casas = 64;
    //long double(16 bits) somatorio = 1, total = 1; utilizada para numeros grandes no windows
    double somatorio = 1, total = 1;
    
    for(i = 2; i <= casas; i++ ){
        total =  total * 2;
        somatorio += total;
        printf("%d valor: %lf\n", i, total);
       // _mingw_printf("%d valor: %lf\n", i, total);
       //_mingw_printf(); função do nucleo do compilador GCC para imprimir numeros grandes no windows
    }
    printf("-> valor: %lf\n", somatorio);
    //_mingw_printf("-> valor: %lf\n", somatorio);
    //_mingw_printf(); função do nucleo do compilador GCC para imprimir numeros grandes no windows
    
    return 0;
}

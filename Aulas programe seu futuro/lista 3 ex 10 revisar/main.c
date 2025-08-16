/******************************************************************************
10) Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int i,valorInicial = 1, valorFinal = 1;// Para que de certo precisaomos guardar o valor 
    //do primeiro dia antes do loop for
    
    for(i = 1; i <= 29; i++){//Como o primeiro dia foi iniciado antes do loop agora precisaomos
    //contar os dias até 29 somente.
        valorInicial = valorInicial * 2; //Multiplica o valor inicial de fora do loop por dois 
        //para encontrar o valor do segundo dia.= 2
        valorFinal += valorInicial;//Soma-se o valor da variavel final que guandou 1 centavo do
        //primeiro dia fora do loop com o valor da variavel valorinicial que era 1 centavo do primeiro
        //dia multiplicado por 2 que é igual a 3
    }
    
    printf("Valor em centavos: %d\n", valorFinal);
    printf("Valor em Reais R$ %.2f\n\n", valorFinal / 100.0);

    return 0;
}

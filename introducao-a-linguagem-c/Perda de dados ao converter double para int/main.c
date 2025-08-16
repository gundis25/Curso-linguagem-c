/******************************************************************************
Perda de dados ao converter um double para int
Castings são capazes de converter um tipo em outro. Mas, de-
pendendo do sentido em que isso é feito, informações podem desaparecer.

Basta você pensar: se estou convertendo para um tipo em que cabe mais in-
formação do que o tipo atual, ele acontecerá sem problemas; caso contrário,

haverá perda de conteúdo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double pi = 3.1415;
// agora o casting forçado, de um tipo
// que aguenta mais dados para um que aguenta
// menos dados, perde informação
    int coitadodopi = (int)pi;
    printf("%d", coitadodopi);

    return 0;
}
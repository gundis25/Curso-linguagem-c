/******************************************************************************

2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite dois valores:\n");
    scanf("%d""%d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    
    printf("%d\n""%d", a, b);
    

    return 0;
}
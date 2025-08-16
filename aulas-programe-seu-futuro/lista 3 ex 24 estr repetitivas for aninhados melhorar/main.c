/******************************************************************************
24) Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
I=1 J=7 -> j - 1 = 6
I=1 J=6
I=1 J=5 -> j - i = 4
I=3 J=9 -> j - 1 = 6
I=3 J=8
I=3 J=7 -> j - i = 4
I=5 J=11 -> j - 1 = 6
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j;
    /*for(i = 1; i <= 1; i++){
        for(j = 7; j >= 5; j-- )
    printf("I = %d J = %d\n", i ,j);
    }
    for(i = 3; i <= 3; i++){
        for(j = 9; j >= 7; j-- )
    printf("I = %d J = %d\n", i ,j);
    }
    for(i = 5; i <= 5; i++){
        for(j = 11; j >= 9; j-- )
    printf("I = %d J = %d\n", i ,j);
    }
    for(i = 7; i <= 7; i++){
        for(j = 13; j >= 11; j-- )
    printf("I = %d J = %d\n", i ,j);
    }
    for(i = 9; i <= 9; i++){
        for(j = 15; j >= 13; j-- )
    printf("I = %d J = %d\n", i ,j);
    }
    return 0;
}*/

    for(i = 1; i <= 9; i += 2){
        for(j = 6 + i; j >= 4 + i; j--)
            printf("I = %d J = %d\n", i ,j);
        printf("\n");    
    }
    

    return 0;   
}    
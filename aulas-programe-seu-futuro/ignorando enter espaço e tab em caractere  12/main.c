#include <stdio.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;
    printf("Digite idade, peso, altura e sexo (f, F, m, M) :\n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);
    //Para que a linguagem c ignore o bufer do teclado (enter, espaço, tab) coloca-se um espaço antes do "%C" "Char".
    printf("Idade: %d anos\nPeso: %.1f Kg\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
    
    return 0;
}
#include <stdio.h>

int main(){
    char a, b;
    printf("Digite uma letra:\n");
    scanf("%c", &a);
    //espao entre os %c -> comnandpo para o computador desconsiderar o tab o enter e o espaço
    //Função fflush(); -> recomenda-se não usar pois elem de dar alguns problemas ele só fund=ciona no windows
    scanf("%c",&b);//Outra opçao é usar este metodo porem ele  não guarda nenhum dado na variavel
    printf("Digite uma letra;\n");
    scanf(" %c", &b);//Uma das opçoes em caso de pedir-se dois caracteres em linhas de codigo diferentes e tambem usar o espaço para desconsiderar o tab enter e espaço
    return 0;
}

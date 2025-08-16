/******************************************************************************
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, idade, somaIdade = 0, contIdade = 0, contAltura = 0;
    float idade_media, altura_media, altura, somaAltura = 0;
    
    for(i = 1; i <= 4; i++){
        printf("\nDigite a idade do aluno: " );
        scanf("%d", &idade);
        printf("\nDigite a altura do aluno: ");
        scanf("%f", &altura);
        if(altura < 1.70){
            somaIdade += idade;
            contIdade ++;
        }  
        if(idade > 20){
            somaAltura +=  altura;
            contAltura ++;
        }    
            
    }
    idade_media = (float) somaIdade / contIdade;
    altura_media = somaAltura / contAltura;
    printf("\nIdade media dos alunos com menos de 1,70 = %.2f\n", idade_media);
    printf("\nAltura media dos alunos com mais de 20 anos = %.2f", altura_media);
    
    
    return 0;
}
#include <stdio.h>  // Para funções de entrada/saída como printf e scanf
#include <stdlib.h> // Para funções como rand, srand, abs
#include <time.h>   // Para a função time (usada para inicializar o gerador de números aleatórios)

// ---

// Definindo constantes usando #define
#define PONTOS_INICIAIS 1000.0 // Quantidade inicial de pontos (use .0 para indicar que é um double)
#define TENTATIVAS_FACIL 20    // Tentativas para o nível Fácil
#define TENTATIVAS_MEDIO 15    // Tentativas para o nível Médio
#define TENTATIVAS_DIFICIL 6   // Tentativas para o nível Difícil

// ---

int main() {
    // Imprimindo cabeçalho bonito do jogo
    printf("\n\n");
    printf("           P  /_\\  P             \n");
    printf("          /_\\_|_|_/_\\            \n");
    printf("        n_n | ||. .|| | n_n      Bem vindo ao   \n");
    printf("        |_|_|nnnn nnnn|_|_|    Jogo de Adivinhação! \n");
    printf("      |\" \"  |  |_|  |\"  \" |          \n");
    printf("      |_____| ' _ ' |_____|          \n");
    printf("            \\__|_|__/                \n");
    printf("\n\n");

    // Declarando variáveis
    int chute;
    int acertou;
    int nivel;
    int totalDeTentativas; // Renomeado para seguir o padrão de capitalização
    int limiteInferior;
    int limiteSuperior;

    // Definindo a quantidade de pontos inicial usando a #define
    double pontos = PONTOS_INICIAIS;

    // ---
    // 1) Permitir que o usuário escolha o limite inferior e superior
    // ---
    printf("Digite o limite inferior: ");
    scanf("%d", &limiteInferior);
    printf("Digite o limite superior: ");
    scanf("%d", &limiteSuperior);

    // Validação dos limites
    while (limiteInferior >= limiteSuperior) {
        printf("O limite inferior não pode ser maior ou igual ao limite superior.\n");
        printf("Digite um novo limite inferior: ");
        scanf("%d", &limiteInferior);
        printf("Digite um novo limite superior: ");
        scanf("%d", &limiteSuperior);
    }

    // Gerando um número secreto aleatório dentro do novo limite
    srand(time(0)); // Inicializa o gerador de números aleatórios com o tempo atual
    int numeroSecreto = limiteInferior + rand() % (limiteSuperior - limiteInferior + 1);

    // Escolhendo o nível de dificuldade
    printf("\nQual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    // Validação do nível
    while (nivel < 1 || nivel > 3) {
        printf("Opção inválida! Por favor, escolha 1, 2 ou 3.\n");
        printf("Qual o nível de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n\n");
        printf("Escolha: ");
        scanf("%d", &nivel);
    }

    // Atribuindo o total de tentativas com base nas #defines do nível
    switch (nivel) {
        case 1:
            totalDeTentativas = TENTATIVAS_FACIL;
            break;
        case 2:
            totalDeTentativas = TENTATIVAS_MEDIO;
            break;
        default: // Case 3 (Difícil)
            totalDeTentativas = TENTATIVAS_DIFICIL;
            break;
    }

    // Loop principal do jogo
    for (int i = 1; i <= totalDeTentativas; i++) {
        printf("\n-> Tentativa %d de %d\n", i, totalDeTentativas);

        printf("Chute um número entre %d e %d: ", limiteInferior, limiteSuperior);
        scanf("%d", &chute);

        // Tratando chute fora dos limites
        if (chute < limiteInferior || chute > limiteSuperior) {
            printf("Você deve chutar um número dentro do limite entre %d e %d!\n", limiteInferior, limiteSuperior);
            i--; // Decrementa 'i' para não consumir uma tentativa
            continue; // Pula para a próxima iteração do loop
        }

        // Verifica se acertou, foi maior ou menor
        acertou = (chute == numeroSecreto); // A atribuição de booleano em C

        if (acertou) {
            break; // Sai do loop se acertar
        } else if (chute > numeroSecreto) {
            printf("Seu chute foi MAIOR do que o número secreto!\n");
        } else {
            printf("Seu chute foi MENOR do que o número secreto!\n");
        }

        // Calcula a quantidade de pontos perdidos
        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
        pontos -= pontosPerdidos; // pontuação atual - pontos perdidos

        // Garante que a pontuação não seja negativa
        if (pontos < 0) {
            pontos = 0;
        }
    }

    // ---
    // Imprimindo mensagem de vitória ou derrota
    // ---
    printf("\n");
    if (acertou) {
        printf("           OOOOOOOOOOO           \n");
        printf("         OOOOOOOOOOOOOOOOOOO     \n");
        printf("       OOOOOO  OOOOOOOOO  OOOOOO \n");
        printf("     OOOOOO      OOOOO      OOOOOO \n");
        printf("   OOOOOOOO  #  OOOOO  #  OOOOOOOO \n");
        printf("  OOOOOOOOOO    OOOOOOO    OOOOOOOOOO \n");
        printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
        printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO \n");
        printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf("   OOOO  OOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("     OOOO    OOOOOOOOOOOOOOO    OOOO   \n");
        printf("       OOOOOO  OOOOOOOOO  OOOOOO    \n");
        printf("         OOOOOO         OOOOOO       \n");
        printf("           OOOOOOOOOOOO            \n");

        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {
        printf("       \\|/ ____ \\|/   \n");
        printf("        @~/ ,. \\~@     \n");
        printf("       /_( \\__/ )_\\   \n");
        printf("         \\__U_/        \n");

        printf("\nVocê perdeu! O número secreto era %d. Tente novamente!\n\n", numeroSecreto);
    }

    return 0;
}
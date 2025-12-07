#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    //**Movimentação das Peças sugeridas no desafio:**
    int bispo_movimentos = 5; // Bispo: 5 casas na diagonal superior direita
    int torre_movimentos = 5; // Torre: 5 casas para a direita
    int rainha_movimentos = 7; // Rainha: 7 casas para a esquerda (adaaptado para o maximo possível no tabuleiro de 8x8)

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimentação do Bispo:\n");
        for (int i = 1; i <= bispo_movimentos; i++) {
            printf("Cima");
            if (i == 1) 
            printf(" e Direita (%d casa)\n", i);
            else
            printf(" e Direita (%d casas)\n", i);
        }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
        char j = 1;
        while (torre_movimentos > 0) {
        printf("Direita (%d casa%s\n", j, (j == 1? " ": "s"));
        j++;
        torre_movimentos--;
        }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
        int k = 1;
        do {
        printf("Esquerda (%d casa%s\n", k, k == 1? " ": "s");
            k++;
            rainha_movimentos--;
        } while (rainha_movimentos > 0);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

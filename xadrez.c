#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 //Implementando função recursiva para o movimento do Bispo
void mover_bispo(int casas){
    if (casas > 0)
    {
        printf("Cima"); //Imprime a direção vertical
        for(int i = 1; i > 0; i--){
            printf(" e Direita\n");//Loop aninhado para imprimir a direção horizontal 
        }
        mover_bispo(casas - 1);
    }
}
void mover_torre(int casas){
    while (casas > 0)
    {
        printf("Direita\n");
        casas--;
    }
}
void mover_rainha(int casas){
    do {
        printf("Esquerda\n");
        casas--;
    } while (casas > 0);
}
int main() {
    // Nível Mestre - Movimentação das Peças
      
    //**Movimentação das Peças sugeridas no desafio:**
    int bispo_movimentos = 5; // Bispo: 5 casas na diagonal superior direita
    int torre_movimentos = 5; // Torre: 5 casas para a direita
    int rainha_movimentos = 7; // Rainha: 7 casas para a esquerda (adaaptado para o maximo possível no tabuleiro de 8x8)
    int cavalo_movimentos = 1; // Cavalo: 1 movimento em L (nese caso será 2 para cima e 1 para direita


    // Implementação de Movimentação do Bispo com função recursiva e loop aninhado
    printf("\nMovimentação do Bispo:\n");
    mover_bispo(bispo_movimentos);
    
    // Implementação de Movimentação da Torre com função recursiva
    printf("\nMovimentação da Torre:\n");
    mover_torre(torre_movimentos);

    // Implementação de Movimentação da Rainha com função recursiva
    printf("\nMovimentação da Rainha:\n");
    mover_rainha(rainha_movimentos);

    // Implementação de Movimentação do Cavalo com loops e variáveis múltiplas
    printf("\nMovimentação do Cavalo:\n");
        
        for (int l = 1, vertical = 0; l <= cavalo_movimentos; l++, vertical = 0)
        {         
            do
            {
                printf("Cima"); //Movimentação vertical
                if (vertical < 1)
                printf(", ");
                vertical++;
            } while (vertical < 2);
            printf(" e Direita\n"); //Movimentação horizontal
    } 
    return 0;
}

#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
// Nível Novato (Feito) - Movimentação das Peças

// declaração de dados
int torre, bispo, rainha;

// A decisão de ultilizar o for para o codigo foi dada pela previsibilidade da movimentação das peças.
//Se já sabemos quantas casas cada peça ira mover, então o for atende nessa nescessidade perfeitamente.
for (torre = 1; torre <= 5; torre++)
{
    printf("Torre se moveu %d casas para cima \n", torre);
}

printf("Torre atualmente está em 6a no tabuleiro. \n\n");

for (bispo = 1; bispo <= 5; bispo++)
{
    printf("Bispo se moveu %d casas para esquerda diagonal \n", bispo);
}

printf("Bispo atualmente está em 6h no tabuleiro. \n\n");

for (rainha = 1; rainha <= 7; rainha++)
{
    printf("Rainha se moveu %d casas para esquerda \n", rainha);
}

printf("Rainha atualmente está em 3a no tabuleiro. \n\n");



    // Nível Aventureiro (WIP) - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre (WIP) - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

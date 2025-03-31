#include <stdio.h>


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre (100%) - Funções Recursivas e Loops Aninhados

// Declaração de Recursividade
void MoverBispo(int casas) // casas sendo uma variavel local
{

if (casas > 0) // estabelece uma comparação para loop
{
    printf("Bispo se moveu %d casas para direita diagonal \n", casas);
    MoverBispo(casas - 1);  //decremento das casas até atingir a condição "falsa" do if acima
}
if (casas == 0) // if onde quando detectar que a variavel for 0 ira imprimir uma mensagem logo após a finalização do loop
{
printf("Bispo está atualmente na casa 2h no tabuleiro \n\n");
}

}
void MoverTorre(int casas)
{

if (casas > 0)
{
    printf("Torre se moveu %d casas para direita \n", casas);
    MoverTorre(casas - 1);
}
if (casas == 0)
{
    printf("Torre está atualmente na casa 5e no tabuleiro \n\n");
}

}
void MoverRainha(int casas)
{

if (casas > 0)
{
    printf("Rainha se moveu %d casas para esquerda \n", casas);
    MoverRainha(casas - 1);

}
if (casas == 0)
{
    printf("Rainha está atualmente na casa 1b no tabuleiro \n\n");
}

}

int main(){

// estabelece a quantidade de repetições do loop para cada umas das suas respectivas peças
MoverTorre(5);
MoverBispo(5);
MoverRainha(8);

// declaração tradicional de dados
int cavalo;

// ultilizar o for para o codigo pela previsibilidade da movimentação das peças e acesso a codigos alinhados mais avançados
for (cavalo = 0; cavalo <= 2; cavalo++) // note como "cavalo" está declarado com o valor "0"
{
    if (cavalo == 0) continue; // continue pula a impressão do "0" para o valor seguinte "1"
    printf("Cavalo se moveu %d casas para cima \n", cavalo);
    
    if (cavalo == 2) 
    {
        printf("Cavalo se moveu 1 casa para esquerda \n");
        
    }
    if (cavalo == 2) break; // break imterrompe o loop assim que atingir "2"
}
printf("Cavalo atualmente está em 3f no tabuleiro \n\n");

    return 0;
}

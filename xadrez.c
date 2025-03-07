// Desafio Movimentação de Peças de Xadrez
#include <stdio.h>

int main()
{
    /*Código que simula movimentação de peças de xadrez usando
    laços de repetição usando um laço diferente para cada peça*/

    int casasTorre = 0, casasBispo = 0, casasRainha = 8, casasCavalo = 1; // Variável de controle dos loops while, do-while e for

    printf("Torre:\n");
    // Loop da Torre
    while (casasTorre < 5)
    {
        printf("Direita\n");
        casasTorre++;
    }

    printf("\nBispo:\n");
    // Loop do Bispo
    do
    {
        printf("Cima, Direita\n");
        casasBispo++;
    } while (casasBispo < 5);

    printf("\nRainha:\n");
    // Loop da Rainha
    for (int i; i < casasRainha; i++)
    {
        printf("Esquerda\n");
    }

    printf("\nCavalo:\n");
    // Loop do Cavalo
    for (int i = 0; i < casasCavalo; i++)
    {
        printf("Cima, ");
        for (int j = 0; j < casasCavalo; j++)
        {
            printf("Esquerda, Esquerda\n");
        }
    }

    return 0;
}
// Desafio Movimentação de Peças de Xadrez
#include <stdio.h>

int main()
{
    /*Código que simula movimentação de peças de xadrez usando
    laços de repetição usando um laço diferente para cada peça*/

    int casasTorre = 0, casasBispo = 0, casasRainha = 8; // Variável de controle dos loops while, do-while e for

    printf("\nTorre:\n");
    // Loop da Torre
    while (casasTorre < 5)
    {
        printf("Direita\n");
        casasTorre++;
    }

    printf("Bispo:\n");
    // Loop do Bispo
    do
    {
        printf("Cima, Direita\n");
        casasBispo++;
    } while (casasBispo < 5);

    printf("Rainha:\n");
    // Loop da Rainha
    for (int i; i < casasRainha; i++)
    {
        printf("Esquerda\n");
    }

    return 0;
}
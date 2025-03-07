// Desafio Movimentação de Peças de Xadrez
#include <stdio.h>

void movimentaPeca(int casas, char *direcao)

{
    if (casas > 0)
    {
        printf("%s\n", direcao);
        movimentaPeca(casas - 1, direcao);
    }
}

void movimentaBispo(int casas, char *vertical, char *horizontal)
{
    int j;
    for (int i = 0; i < casas; i++)
    {
        printf("%s\n", vertical);
        for (j = 0; j < 1; j++)
        {
            printf("%s\n", horizontal);
        }
        j--;
    }
}

void movimentaCavalo(char *direcao1, char *direcao2)
{
    int casas = 3;
    for (int i = 0; i < casas; i++)
    {
        i < (casas - 1) ? printf("Cima\n") : printf("Direita\n");
    }
}

// Utilize loops aninhados com múltiplas variáveis e/ou condições para
// simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).

int main()
{
    /*Código que simula movimentação de peças de xadrez usando
    laços de repetição usando um laço diferente para cada peça*/

    // Loop da Torre
    printf("Torre:\n");
    movimentaPeca(5, "Direita");

    // Loop da Rainha
    printf("\nRainha:\n");
    movimentaPeca(8, "Esquerda");

    // Loop do Bispo 5
    printf("\nBispo:\n");
    movimentaBispo(5, "Cima", "Direita");

    // Loop do Cavalo
    printf("\nCavalo:\n");
    movimentaCavalo("Cima", "Direita");

    return 0;
}
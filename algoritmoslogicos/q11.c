// Questão 11 - Busca Binária

#include <stdio.h>

// Função para realizar a busca
int busca_binaria(int vetor[], int tamanho, int alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == alvo) {
            return meio;
        } else if (vetor[meio] < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1;
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10, 12, 14};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo;

    // Entrada do valor a ser buscado
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &alvo);

    int resultado = busca_binaria(vetor, tamanho, alvo);

    if (resultado != -1) {
        printf("Elemento encontrado na posicao %d\n", resultado);
    } else {
        printf("Elemento nao encontrado\n");
    }

    return 0;
}

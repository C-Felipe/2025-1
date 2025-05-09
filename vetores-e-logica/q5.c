#include <stdio.h>

int main() {
    int vetor1[100], vetor2[100];     // Vetores para armazenar os elementos de cada conjunto
    int tamanho1, tamanho2;           // Tamanhos dos dois vetores
    int unico;                        // Flag para verificar se o elemento do vetor1 já foi processado

    // Entrada do tamanho e elementos do primeiro vetor
    printf("Tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho1; i++) {
        scanf("%d", &vetor1[i]);      // Lê os elementos do primeiro vetor
    }

    // Entrada do tamanho e elementos do segundo vetor
    printf("Tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho2; i++) {
        scanf("%d", &vetor2[i]);      // Lê os elementos do segundo vetor
    }

    // Impressão dos elementos comuns entre os dois vetores
    printf("\nElementos comuns:\n");
    for (int i = 0; i < tamanho1; i++) {
        unico = 0;  // Inicializa a flag para checar duplicidade no vetor1

        // Verifica se o elemento atual do vetor1 já apareceu antes (para evitar repetição)
        for (int k = 0; k < i; k++) {
            if (vetor1[i] == vetor1[k]) {
                unico = 1;  // Marca como já processado
                break;
            }
        }

        // Se for um elemento único no vetor1, procura no vetor2
        if (!unico) {
            for (int j = 0; j < tamanho2; j++) {
                if (vetor1[i] == vetor2[j]) {
                    printf("%d ", vetor1[i]);  // Se encontrou no vetor2, imprime
                    break;                     // Para evitar imprimir o mesmo número mais de uma vez
                }
            }
        }
    }

    printf("\n");
    return 0;
}

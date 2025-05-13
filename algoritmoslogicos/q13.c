// Questão 13 - Soma Diagonal Principal

#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma = 0;

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}
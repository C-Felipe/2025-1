// Questão 6 - Soma de Matrizes


#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];  // Declaração das três matrizes: duas de entrada e uma para o resultado

    printf("SOMA DE MATRIZES 3X3\n\n");

    // Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < 3; i++) {       
        for (int j = 0; j < 3; j++) {   
            scanf("%d", &matriz1[i][j]);     
        }
    }

    // Leitura da segunda matriz
    printf("\nDigite os elementos da segunda matriz:\n");
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 3; j++) {       
            scanf("%d", &matriz2[i][j]);     
        }
    }

    // Cálculo da soma das duas matrizes
    for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 3; j++) {       
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];  
        }
    }

    // Impressão da matriz resultante da soma
    printf("\nResultado da soma das duas matrizes:\n");
    for (int i = 0; i < 3; i++) {   
        for (int j = 0; j < 3; j++) {  
            printf("%d\t", resultado[i][j]);  
        }
        printf("\n");                       
    }

    return 0;
}
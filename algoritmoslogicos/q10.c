// Questão 10 - Sequência de Fibonacci Recursiva

#include <stdio.h>

int fibonacci(int n) {
    if (n < 0) {
        return -1; // Valor inválido para entrada negativa
    }
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int resultado = fibonacci(n);
    if (resultado == -1) {
        printf("O valor n pode ser negativo.\n");
    } else {
        printf("O %d-esimo numero de Fibonacci e: %d\n", n, resultado);
    }
    return 0;
}
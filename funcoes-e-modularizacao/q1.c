#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int inicio, fim;
    
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    
    printf("Digite o final do intervalo: ");
    scanf("%d", &fim);
    
    printf("Numeros primos no intervalo: ");
    for (int i = inicio; i <= fim; i++)
        if (ehPrimo(i)) printf("%d ", i);
    
    return 0;
}
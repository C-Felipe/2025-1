//Questão 1 - Números Primos em Intervaloit

#include <stdio.h>
#include <stdbool.h>

// Verifica se um número é primo (true) ou não (false)
bool ehPrimo(int n) {
    if (n < 2) return false;              // Números menores que 2 não são primos
    for (int i = 2; i*i <= n; i++)       // Otimização: verifica até a raiz quadrada
        if (n % i == 0) return false;   // Se for divisível, não é primo
    return true;                     
}

int main() {
    int inicio, fim;
    
    // Solicita os valores de intervalo ao usuário
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o final do intervalo: ");
    scanf("%d", &fim);
    
    // Exibe os números primos no intervalo
    printf("Numeros primos no intervalo: ");
    for (int i = inicio; i <= fim; i++)
        if (ehPrimo(i)) printf("%d ", i);
    
    return 0;
}
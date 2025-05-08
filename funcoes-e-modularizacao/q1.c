//Quest�o 1 - N�meros Primos em Intervaloit

#include <stdio.h>
#include <stdbool.h>

// Verifica se um n�mero � primo (true) ou n�o (false)
bool ehPrimo(int n) {
    if (n < 2) return false;              // N�meros menores que 2 n�o s�o primos
    for (int i = 2; i*i <= n; i++)       // Otimiza��o: verifica at� a raiz quadrada
        if (n % i == 0) return false;   // Se for divis�vel, n�o � primo
    return true;                     
}

int main() {
    int inicio, fim;
    
    // Solicita os valores de intervalo ao usu�rio
    printf("Digite o inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o final do intervalo: ");
    scanf("%d", &fim);
    
    // Exibe os n�meros primos no intervalo
    printf("Numeros primos no intervalo: ");
    for (int i = inicio; i <= fim; i++)
        if (ehPrimo(i)) printf("%d ", i);
    
    return 0;
}
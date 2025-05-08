//Questão 3 - Inverso de Número

#include <stdio.h>

//Função para inverter os digitos
int inverteNumero(int numero) {
    int invertido = 0;
    
    while (numero != 0) {
        int digito = numero % 10;              // Obtém o último dígito
        invertido = invertido * 10 + digito;  // Adiciona o dígito ao número invertido
        numero /= 10;                        // Remove o último dígito do número original
    }
    
    return invertido;
}

int main() {
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    int resultado = inverteNumero(num);
    printf("O inverso de %d -> %d\n", num, resultado);
    
    return 0;
}
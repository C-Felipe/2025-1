//Quest�o 3 - Inverso de N�mero

#include <stdio.h>

//Fun��o para inverter os digitos
int inverteNumero(int numero) {
    int invertido = 0;
    
    while (numero != 0) {
        int digito = numero % 10;              // Obt�m o �ltimo d�gito
        invertido = invertido * 10 + digito;  // Adiciona o d�gito ao n�mero invertido
        numero /= 10;                        // Remove o �ltimo d�gito do n�mero original
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
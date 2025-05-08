// Questão 2 - Potência (sem usar pow)

#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    int base, exp;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &exp);
    
    if (exp < 0) {
        printf("Erro: Expoente deve ser não negativo.\n");
        return 1;
    }
    
    printf("%d elevado a %d = %d\n", base, exp, potencia(base, exp));
    
    return 0;
}
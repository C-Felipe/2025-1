#include<stdio.h>

int main() {
    int numeros[10]; 
    int contagem[10] = {0}; 

    
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        
        int repetido = 0;
        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) { 
                repetido = 1;
                break;
            }
        }
    
        if (!repetido) {
            int cont = 1;
            for (int j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) { 
                    cont++;
                }
            }
        
            printf("O numero %d se repete %d vezes\n", numeros[i], cont);
        }
    }

    return 0; 
}
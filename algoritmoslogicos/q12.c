// Questão 12 - Verificador de Palíndromo

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int eh_palindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}

int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (eh_palindromo(palavra)) {
        printf("Eh um palindromo.\n");
    } else {
        printf("Nao eh um palindromo.\n");
    }

    return 0;
}
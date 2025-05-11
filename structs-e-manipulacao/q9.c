// Questão 9 - Agenda de contatos

#include <stdio.h>
#include <string.h>

// Estrutura para armazenar um contato
typedef struct {
    char nome[50];
    char telefone[20];
} Contato;

Contato agenda[100];     
int totalContatos = 0;    

void adicionarContato() {
    if (totalContatos >= 100) {
        printf("Agenda cheia!\n");
        return;
    }

    // Leitura do nome e telefone
    printf("Nome: ");
    scanf("%s", agenda[totalContatos].nome);
    printf("Telefone: ");
    scanf("%s", agenda[totalContatos].telefone);

    totalContatos++;
    printf("Contato adicionado!\n");
}

void buscarContato() {
    char nomeBusca[50];
    printf("Nome para buscar: ");
    scanf("%s", nomeBusca);

    // Busca o nome na agenda
    for (int i = 0; i < totalContatos; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            return;
        }
    }

    printf("Contato nao encontrado!\n");
}

void exibirContatos() {
    if (totalContatos == 0) {
        printf("Nenhum contato cadastrado!\n");
        return;
    }

    printf("\nLista de Contatos:\n");
    for (int i = 0; i < totalContatos; i++) {
        printf("\nContato %d:\n", i+1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
    }
}

int main() {
    int opcao;

    do {
        // Menu principal
        printf("\nMenu:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Buscar contato\n");
        printf("3 - Exibir todos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: adicionarContato(); break;
            case 2: buscarContato(); break;
            case 3: exibirContatos(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while(opcao != 0); 

    return 0;
}
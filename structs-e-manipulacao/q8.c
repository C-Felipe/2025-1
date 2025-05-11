// Questão 8 - Estoque simples

#include <stdio.h>
#include <string.h>

// Definição da estrutura que representa um produto
typedef struct {
    char nome[50];   
    int codigo;        
    int quantidade;    
    float preco;       
} Produto;

// Vetor global para armazenar até 100 produtos
Produto produtos[100];
int totalProdutos = 0; // Contador de produtos cadastrados

// Função para cadastrar um novo produto
void cadastrarProduto() {
    if (totalProdutos >= 100) {   // Verifica se o limite foi atingido
        printf("Limite de produtos atingido!\n");
        return;
    }
      
    // Coleta os dados do produto
    printf("Nome: ");
    scanf("%s", produtos[totalProdutos].nome); 
    printf("Codigo: ");
    scanf("%d", &produtos[totalProdutos].codigo); 
    printf("Quantidade: ");
    scanf("%d", &produtos[totalProdutos].quantidade); 
    printf("Preco: ");
    scanf("%f", &produtos[totalProdutos].preco); 
    
    totalProdutos++;
    printf("Produto cadastrado com sucesso!\n");
}

// Função para buscar e exibir um produto pelo código
void buscarProduto() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo); 
    
    // Percorre a lista de produtos cadastrados
    for (int i = 0; i < totalProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nNome: %s\n", produtos[i].nome);
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preco: %.2f\n", produtos[i].preco);
            return;
        }
    }
    
    printf("Produto nao encontrado!\n"); // Caso não encontre
}

// Função para listar todos os produtos cadastrados
void listarProdutos() {
    if (totalProdutos == 0) {
        printf("Nenhum produto cadastrado!\n");
        return;
    }
    
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preco: %.2f\n", produtos[i].preco);
    }
}

int main() {
    int opcao; // Variável para armazenar a opção do menu
    
    do {
        // Exibe o menu de opções
        printf("\nMenu:\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Buscar produto\n");
        printf("3 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        // Executa a ação correspondente à opção escolhida
        switch(opcao) {
            case 1:
                cadastrarProduto(); // Chama a função de cadastro
                break;
            case 2:
                buscarProduto(); // Chama a função de busca
                break;
            case 3:
                listarProdutos(); // Chama a função de listagem
                break;
            case 0:
                printf("Saindo...\n"); // Sai do programa
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);
    
    return 0;
}

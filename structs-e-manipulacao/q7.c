// Questão 7 - Cadastro de alunos

#include <stdio.h>
#include <string.h>

// Definição da estrutura que representa um aluno
typedef struct {
    char nome[50];  
    int matricula;     
    float media;       
} Aluno;

int main() {
    int n; // Variável para armazenar a quantidade de alunos a serem cadastrados

    // Solicita ao usuário a quantidade de alunos
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    // Criação de um vetor de estruturas do tipo Aluno com tamanho 'n'
    Aluno alunos[n];

    // Loop para cadastrar os dados de cada aluno
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i+1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Média: ");
        scanf("%f", &alunos[i].media);
    }

    // Exibição dos alunos que foram aprovados (média >= 7.0)
    printf("\nAlunos aprovados:\n");
    int aprovados = 0; // Contador de alunos aprovados

    for (int i = 0; i < n; i++) {
        // Verifica se o aluno foi aprovado
        if (alunos[i].media >= 7.0) {
            // Exibe os dados do aluno aprovado
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Média: %.2f\n\n", alunos[i].media);
            aprovados++;
        }
    }

    // Caso nenhum aluno tenha sido aprovado
    if (aprovados == 0) {
        printf("Nenhum aluno foi aprovado.\n");
    } else {
        // Exibe o total de alunos aprovados
        printf("Total de aprovados: %d\n", aprovados);
    }

    return 0; }

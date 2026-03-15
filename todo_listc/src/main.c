#include <stdio.h>
#include <string.h>

#define MAX_TAREFAS 100
#define TAM_DESCRICAO 100

typedef struct {
    char descricao[TAM_DESCRICAO];
    int concluida;
} Tarefa;

Tarefa tarefas[MAX_TAREFAS];
int totalTarefas = 0;

void mostrarMenu() {
    printf("\n===== TO-DO LIST =====\n");
    printf("1 - Adicionar tarefa\n");
    printf("2 - Listar tarefas\n");
    printf("3 - Marcar tarefa como concluida\n");
    printf("4 - Remover tarefa\n");
    printf("5 - Sair\n");
    printf("Escolha uma opcao: ");
}

void adicionarTarefa() {
    if (totalTarefas >= MAX_TAREFAS) {
        printf("Limite de tarefas atingido!\n");
        return;
    }

    getchar();

    printf("Digite a descricao da tarefa: ");
    fgets(tarefas[totalTarefas].descricao, TAM_DESCRICAO, stdin);

    tarefas[totalTarefas].descricao[strcspn(tarefas[totalTarefas].descricao, "\n")] = '\0';
    tarefas[totalTarefas].concluida = 0;
    totalTarefas++;

    printf("Tarefa adicionada com sucesso!\n");
}

int main() {
    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarTarefa();
                break;
            case 2:
                printf("Opcao listar tarefas em desenvolvimento.\n");
                break;
            case 3:
                printf("Opcao concluir tarefa em desenvolvimento.\n");
                break;
            case 4:
                printf("Opcao remover tarefa em desenvolvimento.\n");
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}

#include <stdio.h>
#include "tarefas.h"

int main() {
    int escolha = 1;
    int prioridade;
    char id[TOTAL_ID_TAREFAS];

    while (escolha != 0) {
    	printf("Gestor de Tarefa\n");
    	printf("1-Nova Tarefa\n");
    	printf("2-Listar Tarefa\n");
    	printf("3-Terminar Tarefa\n");
    	
        printf("escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
        printf("Insere o id da Tarefa\n");
            scanf("%s", id);
            printf("Insere a prioridade da Tarefa\n");
            scanf("%d", &prioridade);
            insertTarefa(prioridade, id);
        } else if (escolha == 2) {
            printf("Insere a prioridade da Tarefa\n");
            scanf("%d", &prioridade);
            listTarefa(prioridade);
        } else if (escolha == 3) {
        	printf("Insere o id da Tarefa\n");
            scanf("%s", id);
            completoTarefa(id);
        } else {
            printf("Comando inválido.\n");
        }
    }

    return 0;
}


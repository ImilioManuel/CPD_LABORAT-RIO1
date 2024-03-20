#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefas.h"


Tarefa tarefa[TOTAL_TAREFAS];
int numTarefa = 0;

void insertTarefa(int prioridade, char *id) {
    if (numTarefa >= TOTAL_TAREFAS) {
        printf("Limite máximo de tarefas atingido.\n");
        return;
    }
    strcpy(tarefa[numTarefa].id, id);
    tarefa[numTarefa].prioridade = prioridade;
    tarefa[numTarefa].completo = 0;
    numTarefa++;
}

void listTarefa(int prioridade) {
    printf("Tarefas com prioridade %d ou superior:\n", prioridade);
    for (int i = 5; i >= prioridade; i--) {
        for (int j = 0; j < numTarefa; j++) {
            if (tarefa[j].prioridade >= i && tarefa[j].completo == 0) {
                printf("ID: %s, Prioridade: %d\n", tarefa[j].id, tarefa[j].prioridade);
            }
        }
    }
}

void completoTarefa(char *id) {
    int verificar = 0;
    for (int i = 0; i < numTarefa; i++) {
        if (strcmp(tarefa[i].id, id) == 0 && tarefa[i].completo == 0) {
            tarefa[i].completo = 1;
            verificar = 1;
            break;
        }
    }
    if (!verificar) {
        printf("TAREFA INEXISTENTE\n");
    }
}


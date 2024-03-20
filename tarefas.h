#ifndef GESTAO_TAREFA_H
#define GESTAO_TAREFA_H

#define TOTAL_TAREFAS 100
#define TOTAL_ID_TAREFAS 50

typedef struct {
    char id[TOTAL_ID_TAREFAS];
    int prioridade;
    int completo;
} Tarefa;



void insertTarefa(int prioridade, char *id);
void listTarefa(int prioridade);
void completoTarefa(char *id);

#endif 

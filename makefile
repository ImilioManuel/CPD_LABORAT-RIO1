main: tarefas.o main.o
	gcc -o main tarefas.o main.o
tarefas.o: tarefas.c tarefas.h
	gcc -g -c tarefas.c
main.o: main.c tarefas.h
	gcc -g -c main.c

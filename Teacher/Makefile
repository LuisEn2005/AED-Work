
$(APP): list.o $(APP).o
	gcc list.o $(APP).o -o $(APP) 
list.o: list.h list.c
	gcc -g -c list.c
$(APP).o: $(APP).c list.h
	gcc -g -c $(APP).c

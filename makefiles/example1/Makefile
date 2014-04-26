all: cfact

cfact: cfact.o factorial.o

cfact.o: cfact.c
	gcc -Wall -g -c cfact.c

factorial.o: factorial.c
	gcc -Wall -g -c factorial.c

clean:
	rm -rf *.o cfact

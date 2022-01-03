PARAMS = -g -W -pedantic
 
all: main.c CriarPersonagem Racas Classes
	gcc main.c criarPersonagem.o Racas.o Classes.o -o finalMake $(PARAMS)
CriarPersonagem: criarPersonagem.c
	gcc criarPersonagem.c -c $(PARAMS)
Racas: Racas.c
	gcc Racas.c -c $(PARAMS)
Classes: Classes.c
	gcc Classes.c -c $(PARAMS)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "InterfaceRPG.h"
#include "criarPersonagem.h" 

int SetaRaca(Personagem *p){
    printf("Escolha sua Raca:\n ");
    printf("\t[0]Anao [1]Elfo [2]Halfling [3]Humano [4]Draconato [5]Gnomo [6]MeioElfo [7]MeioOrc [8]Tiefling\n");
    printf("\t > ");

    int raca;
    scanf("%d", &raca);

    p->raca = raca;
    return 1;
}

int SetaClasse(Personagem *p){
    printf("Escolha sua Classe:\n");
    printf("\t[0]Barbaro [1]Bardo [2]Bruxo [3]Clerigo [4]Druida [5]Feiticeiro [6]Guerreiro [7]Ladino [8]Mago [9]Monge [10]Paladino [11]Patrulheiro\n");
    printf("\t > ");

    int classe;
    scanf("%d", &classe);
    
    p->classe = classe;
    return 1;
}

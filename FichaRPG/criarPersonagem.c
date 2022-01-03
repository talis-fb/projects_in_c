#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "InterfaceRPG.h"
#include "criarPersonagem.h" 
#include "Classes.h"
#include "Racas.h"

void SetaRaca(Personagem *p){
    printf("Escolha sua Raca:\n ");
    printf("\t[0]Anao [1]Elfo [2]Halfling [3]Humano [4]Draconato [5]Gnomo [6]MeioElfo [7]MeioOrc [8]Tiefling\n");
    printf("\t > ");

    int raca;
    scanf("%d", &raca);

    p->raca = raca;
}

void SetaClasse(Personagem *p){
    printf("Escolha sua Classe:\n");
    printf("\t[0]Barbaro [1]Bardo [2]Bruxo [3]Clerigo [4]Druida [5]Feiticeiro [6]Guerreiro [7]Ladino [8]Mago [9]Monge [10]Paladino [11]Patrulheiro\n");
    printf("\t > ");

    int classe;
    scanf("%d", &classe);
    
    p->classe = classe;
}

void SetaPV(Personagem *p){
    p->pv_max = vida_maxima(p->classe, p->atb.constituicao, p->nivel);
}

void SetaProficiencias(Personagem *p){
    Atributo *prof = proficiencia_resistencia( p->classe );
    for(int i = 0;i<2;i++)
        p->proficientes[i] = prof[i];
}

void SetaAprimoramentosAtbs(Personagem *p){
    Atbs atributosP = p->atb;
    Atbs raca = aprimoramentos(p->raca);
    atributosP.forca = atributosP.forca + raca.forca;
    atributosP.destreza = atributosP.destreza + raca.destreza;
    atributosP.constituicao = atributosP.constituicao + raca.constituicao;
    atributosP.sabedoria = atributosP.sabedoria + raca.sabedoria;
    atributosP.inteligencia = atributosP.inteligencia + raca.inteligencia;
    atributosP.carisma = atributosP.carisma + raca.carisma;
    p->atb = atributosP;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "InterfaceRPG.h"

const struct IDadosClasses {
    int HitDice;
    Atributo proficiencia_resistencia[2];
} DadosClasses[] = {
    {12, { forca, constituicao }},
    {8,  { 1,5 }},
    {8,  { 3,5 }},
    {8,  { 3,5 }},
    {8,  { 3,4 }},
    {6,  { 2,5 }},
    {10, { 0,2 }},
    {8,  { 1,4 }},
    {6,  { 3,4 }},
    {8,  { 0,1 }},
    {10, { 3,5 }},
    {10, { 0,1 }}
};

int vida_maxima(Classe classe, int constituicao, int nivel){
    int HitDice = DadosClasses[classe].HitDice;
    if(nivel == 1 )
        return HitDice + constituicao;
    else
        return HitDice + ((nivel-1) * ( constituicao + (HitDice/2) + 1 ));
}

Atributo *proficiencia_resistencia(Classe classe){
    Atributo *array = malloc(sizeof(Atributo) * 2);
    array[0] = DadosClasses[classe].proficiencia_resistencia[0];
    array[1] = DadosClasses[classe].proficiencia_resistencia[1];
    return array;
}

int bonus_proficiencia(int nivel){
    if(nivel >= 1 && nivel <= 4) return 2;
    if(nivel >= 5 && nivel <= 10) return 3;
    if(nivel >= 11 && nivel <= 16) return 4;
    if(nivel >= 17 && nivel <= 20) return 5;
    return 0;
}



#ifndef DEF
#define DEF

#include "enums.h"

typedef enum IAtributo {
    forca,
    destreza,
    constituicao,
    sabedoria,
    inteligencia,
    carisma
} Atributo;

typedef struct IAtbs {
    int forca;
    int destreza;
    int constituicao;
    int sabedoria;
    int inteligencia;
    int carisma;
} Atbs;

typedef struct IArma {
    char *dano;
    TipoDano TipoDano;
    int bonus;
} Arma;

/* TODA A ESTRUTURA DE UM PERSONAGEM */
typedef struct IPersonagem {
    int nivel;
    Raca raca;
    Classe classe;
    Atributo proficientes[2];
    Atbs atb;
    Pericia pericias[18];
    int pv_max;
    int pv_atual;
    Arma armas[5];
    int ca;
    int deslocamento;
    int xp;
} Personagem;

#endif

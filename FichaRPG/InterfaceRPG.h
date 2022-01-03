#ifndef DEF
#define DEF

#include "enums.h"

typedef struct IAtributos {
    int forca;
    int destreza;
    int constituicao;
    int sabedoria;
    int inteligencia;
    int carisma;
} Atributo;

typedef struct IArma {
    char *dano;
    TipoDano TipoDano;
    int bonus;
} Arma;

/* typedef struct IMagia { */
/*     char *dano; */
/*     TipoDano TipoDano; */
/*     int bonus; */
/* } Magia; */

/* TODA A ESTRUTURA DE UM PERSONAGEM */
typedef struct IPersonagem {
    /* Atributos atb; */
    int nivel;
    Raca raca;
    Classe classe;
    Atributo proficientes[2];
    struct atb {
        int forca;
        int destreza;
        int constituicao;
        int sabedoria;
        int inteligencia;
        int carisma;
    } atb;
    Pericia pericias[18];
    int pv_max;
    int pv_atual;
    Arma armas[5];
    int ca;
    int deslocamento;
    int xp;
} Personagem;

#endif

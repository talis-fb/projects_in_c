#ifndef DEF
#define DEF

typedef struct IAtributos {
    int forca;
    int destreza;
    int constituicao;
    int sabedoria;
    int inteligencia;
    int carisma;
} Atributos;

typedef enum ITiposDano { Cortante, Contusão, Fogo, Nécrotico, Gelo, Psitrico } TiposDano;

typedef enum IClasses { Guerreiro, Mago, Ranger } Classes;

typedef enum IRacas { Humano, Anao, Elfo } Racas;

typedef struct IArma {
    char *dano;
    TiposDano TipoDano;
    int bonus;
} Arma;

typedef struct IPersonagem {
    Atributos atb;
    Racas raca;
    Classes classe;
    Arma armas[3];
} Personagem;

#endif

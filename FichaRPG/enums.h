#ifndef ENUMS
#define ENUMS

typedef enum ITiposDano {
    Acido, Concussao, Cortante, Eletrico,
    Energia, Fogo, Frio, Necrotico, Perfurante,
    Psiquico, Radiante, Trovejante, Veneno
} TipoDano;

typedef enum IClasses { 
    Barbaro,
    Bardo,
    Bruxo,
    Clerigo,
    Druida,
    Feiticeiro,
    Guerreiro,
    Ladino,
    Mago,
    Monge,
    Paladino,
    Patrulheiro
} Classe;

typedef enum IRacas { 
    Anao,
    Elfo,
    Halfling,
    Humano,
    Draconato,
    Gnomo,
    MeioElfo,
    MeioOrc,
    Tiefling
} Raca;

typedef enum IPericias {
    Acrobacia,
    AdestrarAnimais,
    Arcanismo,
    Atletismo,
    Atuacao,
    Enganacao,
    Furtividade,
    Historia,
    Intimidacao,
    Intuicao,
    Investigacao,
    Medicina,
    Natureza,
    Percepcao,
    Persuasao,
    Prestidigitacao,
    Religiao,
    Sobrevivencia
} Pericia;


#endif

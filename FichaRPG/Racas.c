#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "InterfaceRPG.h"

const Atbs Aprimoramentos[9] = {
    {0, 0, 2, 0, 0, 0}, // Anao
    {0, 2, 0, 0, 0, 0}, // Elfo
    {0, 2, 0, 0, 0, 0}, // Halfling
    {1, 1, 1, 1, 1, 1}, // Humano
    {2, 0, 0, 0, 0, 1}, // Draconato
    {0, 0, 0, 0, 2, 0}, // Gnomo
    {0, 0, 0, 0, 0, 2}, // MeioElfo
    {2, 0, 1, 0, 0, 0}, // MeioOrc
    {0, 0, 0, 0, 1, 2} // Tiefling
};


Atbs aprimoramentos(Raca raca){
    return Aprimoramentos[raca];
}



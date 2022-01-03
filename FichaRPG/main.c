#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "InterfaceRPG.h"
#include "criarPersonagem.h"

int main(int argc, char* argv[]){
    Personagem eu;

    SetaRaca(&eu);
    SetaClasse(&eu);

    printf("%d %d", eu.classe, eu.raca );

    SetaPV(&eu);
    SetaProficiencias(&eu);
    SetaAprimoramentosAtbs(&eu);

    return 0;
}


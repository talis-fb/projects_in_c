#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "InterfaceRPG.h"
#include "criarPersonagem.h"

int main(){
    Personagem *eu = malloc(sizeof(Personagem));

    SetaRaca(eu, Humano);
    SetaClasse(eu, Mago);

    printf("%d %d", eu->classe, eu->raca );

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

#include "InterfaceRPG.h"

int SetaRaca(Personagem *p, Racas r){
    p->raca = r;
    return 1;
}

int SetaClasse(Personagem *p, Classes c){
    p->classe = c;
    return 1;
}

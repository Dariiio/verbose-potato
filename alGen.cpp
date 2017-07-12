#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "libGen.h"

using namespace std;

 int main(int argc, char const *argv[]) {

    srand((time(NULL)));

    individuo_str indiv;
    int vectorSolucion[] = {1,1,1,1,1};

    inicializarIndividuo(&indiv);
    mostrarIndividuo(&indiv);
    randomizarIndividuo(&indiv);
    mostrarIndividuo(&indiv);
    evaluarIndividuo(&indiv, vectorSolucion);
    mostrarIndividuo(&indiv);


    return 0;
}

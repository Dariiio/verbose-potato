#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "libGen.h"

using namespace std;

 int main(int argc, char const *argv[]) {

    individuo_str indiv;

    inicializarIndividuo(&indiv);

    mostrarIndividuo(&indiv);

    return 0;
}

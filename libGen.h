#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

#define POBLACION_MAX 10
#define LONG_VECTOR 5

typedef struct individuo_str{
    int vector[LONG_VECTOR];
    int fitness;
}individuo_str;

// inviv = individuo
void inicializarIndividuo(individuo_str * indiv){
    int i = 0;
    for (i = 0; i < LONG_VECTOR; i++) {
        indiv->vector[i] = 0;
    }
    indiv->fitness = 0;
}

void mostrarIndividuo(individuo_str * indiv){
    int i = 0;
    printf("\n[");
    for (i = 0; i < LONG_VECTOR; i++) {
        if(i == LONG_VECTOR - 1){
            printf("%d]", indiv->vector[i]);
        }else{
            printf("%d,", indiv->vector[i]);
        }
    }
    printf(" finess = %d", indiv->fitness);
}

void randomizarIndividuo(individuo_str * indiv){
    int i;
    for(i = 0; i < LONG_VECTOR ; i++){
        indiv->vector[i] = rand()%(10-1);
    }
}

void evaluarIndividuo(individuo_str * indiv, int vectorSolucion[]){
    int i;
    for (i = 0; i < LONG_VECTOR; i++) {
        if(indiv->vector[i]==vectorSolucion[i]){
            indiv->fitness++;
        }
    }
}
//comentario loooool

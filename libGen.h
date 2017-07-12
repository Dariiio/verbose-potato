#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define POBLACION_MAX 10
#define LONG_VECTOR 5

typedef struct individuo_str{
    int vector[LONG_VECTOR];
    int fitness;
}individuo_str;

void inicializarIndividuo(individuo_str * individuo){
    int i = 0;
    for (i = 0; i < LONG_VECTOR; i++) {
        individuo->vector[i] = 0;
    }
    individuo->fitness = 0;
}

void mostrarIndividuo(individuo_str * individuo){
    int i = 0;
    printf("\n[");
    for (i = 0; i < LONG_VECTOR; i++) {
        if(i == LONG_VECTOR - 1){
            printf("%d]", individuo->vector[i]);
        }else{
            printf("%d,", individuo->vector[i]);
        }
    }
    printf(" finess = %d", individuo->fitness);
}

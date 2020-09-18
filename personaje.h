#ifndef PERSONAJE_H
#define PERSONAJE

#include <stdio.h>

struct personaje{
        char nombre[20];
        char tipo[20];
        float fuerza;
        int salud;

}personajes[5];

unsigned int cont = 0;

void capturar_personajes();
void capturar_personajes(){
    if(cont < 5){
    printf("Nombre: ");
    scanf("%s", personajes[cont].nombre);
    printf("\nTipo: ");
    scanf("%s", personajes[cont].tipo);
    printf("\nFuerza: ");
    scanf("%f",&personajes[cont].fuerza);
    printf("\nSalud: ");
    scanf("%d",&personajes[cont].salud);
    cont++;
    }else
        printf("Arreglo de personajes está lleno\n");
    system("PAUSE");
    system("CLS");
}

void mostrar_personajes();
void mostrar_personajes(){
    int j;
    for(j=0; j<cont; j++){
        printf("Personaje %d\n",j+1);
        printf("Nombre: %s\n", personajes[j].nombre);
        printf("Tipo: %s\n", personajes[j].tipo);
        printf("Fuerza: %f\n", personajes[j].fuerza);
        printf("Salud: %d\n", personajes[j].salud);
        printf("--------------------------------------\n");

    }
     system("PAUSE");
     system("CLS");

}

#endif // PERSONAJE_H

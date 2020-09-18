#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void capturar_enteros();
void capturar_enteros(){
    int i,suma=0,enteros[5];
    float promedio;
    for(i=0; i<5; i++){
        printf("Ingrese el valor del numero %d: ",i+1);
        scanf("%d",&enteros[i]);
        printf("\n");
    }

    for(i=0; i<5; i++){
        printf("Valor del numero %d: %d\n",i+1,enteros[i]);
    }
    for(i=0; i<5; i++){
        suma = suma + enteros[i];
    }
    printf("La suma de los valores es: %d\n",suma);
    promedio = suma/5.0;
    printf("El promedio de los valores es: %f\n",promedio);
    system("PAUSE");
    system("CLS");
}

void mostrar(int num, char mensaje[]){
    for(int i=0; i<num; i++){
        printf("%d %s",i+1, mensaje);
    }
    system("PAUSE");
    system("CLS");
}

int main(){
    char op;
    char cadena[20];
    int n;

    do{
        printf("1.- Capturar enteros\n");
        printf("2.- Mostrar cadena n veces\n");
        printf("3.- Personajes\n");
        printf("0.- Salir\n");
        scanf("%c",&op);
        fflush(stdin);
         system("CLS");

        switch(op){
            case '1':
                capturar_enteros();
                break;
            case '2':
                printf("Escribe una cadena de hasta 20 caracteres: ");
                fgets(cadena, sizeof(cadena), stdin);
                printf("Dame el numero de cuantas veces quieres que se repita: ");
                scanf("%d",&n);
                printf("\n");
                mostrar(n, cadena);
                break;
            case '3':
                break;
            default:
                break;


         }

    }while (op != '0');
    return 0;
}

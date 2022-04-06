#include <stdio.h>
#include <string.h>
#define RENGLONES 4
#define COLUMNAS 10

void solicitaNombres(char arregloDeCadenas[RENGLONES][COLUMNAS]);
int buscaNombre(char arregloDeCadenas[RENGLONES][COLUMNAS], char nombreABuscar[1][COLUMNAS], int tamanoNombreABuscar);

int main(){
    char arregloDeCadenas[RENGLONES][COLUMNAS];
    int encontroElNombre, tamanoNombreABuscar;
    char nombreABuscar[1][COLUMNAS];

    solicitaNombres(arregloDeCadenas);


    printf("Ingresa el nombre que quieres buscar\n");
    scanf("%s", nombreABuscar);
    tamanoNombreABuscar = strlen(nombreABuscar);

    encontroElNombre = buscaNombre(arregloDeCadenas, nombreABuscar, tamanoNombreABuscar);
    printf("%d", encontroElNombre);
}

void solicitaNombres(char arregloDeCadenas[RENGLONES][COLUMNAS]){

    for(int i = 0; i < RENGLONES; i++)
    {
        printf("Escribe el nombre numero %d\n", i);
        scanf("%s[^\n]", arregloDeCadenas[i]);
    }


    }




int buscaNombre(char arregloDeCadenas[RENGLONES][COLUMNAS], char nombreABuscar[1][COLUMNAS], int tamanoNombreABuscar){
    int caracteresIguales = 0;

    for (int i = 0; i < RENGLONES; i++) {
        for (int j = 0; j < tamanoNombreABuscar; j++) {
            if(arregloDeCadenas[i][j] == nombreABuscar[0][j])
                caracteresIguales++;
        }
        if(caracteresIguales == tamanoNombreABuscar)
            return 1;
        caracteresIguales = 0;
    }
        return 0;
}

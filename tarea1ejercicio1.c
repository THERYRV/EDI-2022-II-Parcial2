#include <stdio.h>
#include <string.h>
int recursiva(char cadena[100], int numeroCaracteres, int indice);
int ciclos(char cadena[100], int numeroCaracteres);

int main(){

    char cadenaDeCaracteres[100];
    int numeroDeCaracteres, esPalindroma, j=0;

    printf("Ingresa la cadena de caracteres\n");
    scanf("%[^\n]", cadenaDeCaracteres);

    numeroDeCaracteres = strlen(cadenaDeCaracteres);

    for(int i = 0; i < numeroDeCaracteres; i++){
        if(cadenaDeCaracteres[i] == ' '){
            for(j = i; j < numeroDeCaracteres; j++)
            {
                cadenaDeCaracteres[j]=cadenaDeCaracteres[j+1];
            }
            numeroDeCaracteres--;
        }
    }

    esPalindroma = recursiva(cadenaDeCaracteres, numeroDeCaracteres, 0);
    printf("%d", esPalindroma);
}

int ciclos(char cadena[100], int numeroCaracteres){
    int esPalindroma = 1;
    for (int i = 0; i < numeroCaracteres / 2; i++) {
        if(cadena[i] != cadena[numeroCaracteres-i-1])
            esPalindroma = 0;
    }
    return esPalindroma;
}


int recursiva(char cadena[100], int numeroCaracteres, int indice){
    if(cadena[indice] != cadena[numeroCaracteres - indice - 1])
        return 0;
    if (indice < numeroCaracteres / 2)
        recursiva(cadena, numeroCaracteres, indice + 1);
    else
        return 1;
}
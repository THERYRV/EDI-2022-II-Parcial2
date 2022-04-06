#include<stdio.h>
#define TAM 4
int leeObjetivo();
int regresaIndiceDelObjetivo(int arregloOrdenado[TAM], int objetivo);

int main(){
    int arregloOrdenado[TAM] = {1, 3, 5, 6}, objetivo, indiceDelObjetivo;

    objetivo = leeObjetivo();
    indiceDelObjetivo = regresaIndiceDelObjetivo(arregloOrdenado, objetivo);

    printf("El indice del objetivo es %d", indiceDelObjetivo);

}

int leeObjetivo(){
    int objetivo;
    printf("Ingresa el valor objetivo\n");
    scanf("%d", &objetivo);
    return objetivo;
}

int regresaIndiceDelObjetivo(int arregloOrdenado[TAM], int objetivo){
    int indiceDelObjetivo;
    for (int i = 0; i < TAM; i++) {
        if(arregloOrdenado[i] == objetivo)
            indiceDelObjetivo = i;
        else if(objetivo > arregloOrdenado[i])
            indiceDelObjetivo = i + 1;
    }
    return indiceDelObjetivo;
}

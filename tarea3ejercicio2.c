#include <stdio.h>
#define N 10
int elementoQueApareceMasVeces(int arreglo[N]);
void bubbleSort(int arreglo[N]);

int main(){
    int nums[N] = { 1, 3, 1, 4, 3, 2, 1, 3, 2, 1};
    int numeroQueMasRepite;
    numeroQueMasRepite = elementoQueApareceMasVeces(nums);
    printf("El numero que aparece mas veces dentro del arreglo es el: %d\n", numeroQueMasRepite);

    bubbleSort(nums);
    printf("Arreglo ordenado: \n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", nums[i]);
    }
}

int elementoQueApareceMasVeces(int arreglo[N]){
    int numeroDeVecesQueApareceCadaNumero[N];
    int vecesQueSeRepite = 0;
    int numeroQueMasVecesSeRepite, indiceDelQueMasSeRepite;
    int max = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(arreglo[i] == arreglo[j])
                vecesQueSeRepite++;
        }
        numeroDeVecesQueApareceCadaNumero[i] = vecesQueSeRepite;
        vecesQueSeRepite = 0;
    }


    for (int i = 0; i < N; ++i) {
        if(numeroDeVecesQueApareceCadaNumero[i] > max)
            max = numeroDeVecesQueApareceCadaNumero[i];
            indiceDelQueMasSeRepite = i;
    }

    numeroQueMasVecesSeRepite = arreglo[indiceDelQueMasSeRepite];
    return numeroQueMasVecesSeRepite;
}

void bubbleSort(int arreglo[N]){

    int aux, cambio = 1;
    for (int i = 0; i < N && cambio == 1; ++i) {
        cambio = 0;
        for (int actual = 0; actual < N - i - 1; ++actual) {
            if (arreglo[actual] > arreglo[actual + 1]) {
                aux = arreglo[actual];
                arreglo[actual] = arreglo[actual + 1];
                arreglo[actual + 1] = aux;
                cambio = 1;
            }
        }
    }
}
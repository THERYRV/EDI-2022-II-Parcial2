#include<stdio.h>
#define TAM 4
void leeArreglo(int nums[TAM]);
int seRepiteONo(int nums[TAM]);
void bubbleSort(int arreglo[TAM]);


int main(){
    int nums[TAM];
    int seRepite;
    leeArreglo(nums);
    bubbleSort(nums);

    printf("Arreglo ordenado: \n");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ", nums[i]);
    }

    seRepite = seRepiteONo(nums);
    printf("\n%d", seRepite);
}

void leeArreglo(int nums[TAM]){
    for (int i = 0; i < TAM; ++i) {
        printf("Ingresa el valor %d\n", i);
        scanf("%d", &nums[i]);
    }
}

int seRepiteONo(int nums[TAM]){
    int vecesQueSeRepite = 0;
    for (int i = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            if(nums[i] == nums[j])
                vecesQueSeRepite++;
        }
        if(vecesQueSeRepite >= 2)
            return 1;
        vecesQueSeRepite = 0;
    }
    return 0;
}

void bubbleSort(int arreglo[TAM]){

    int aux, cambio = 1;
    for (int i = 0; i < TAM && cambio == 1; ++i) {
        cambio = 0;
        for (int actual = 0; actual < TAM - i - 1; ++actual) {
            if (arreglo[actual] > arreglo[actual + 1]) {
                aux = arreglo[actual];
                arreglo[actual] = arreglo[actual + 1];
                arreglo[actual + 1] = aux;
                cambio = 1;
            }
        }
    }
}
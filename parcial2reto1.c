#include <stdio.h>
#define TAM 5
void leeArreglo(int nums[TAM]);
void generaRespuesta(int nums[TAM], int respuesta[TAM]);

int main(){
    int nums[TAM], respuesta[TAM];
    leeArreglo(nums);
    generaRespuesta(nums, respuesta);

    printf("Arreglo respuesta: \n");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ", respuesta[i]);
    }
}

void leeArreglo(int nums[TAM]){
    for (int i = 0; i < TAM; ++i) {
        printf("Ingresa el valor %d\n", i);
        scanf("%d", &nums[i]);
    }
}

void generaRespuesta(int nums[TAM], int respuesta[TAM]){
    int sumaDeMultiplicaciones = 1;
    for (int i = 0; i < TAM; ++i) {
        for (int j = 0; j < TAM; ++j) {
            if(i != j)
            sumaDeMultiplicaciones = sumaDeMultiplicaciones * nums[j];
        }
        respuesta[i] = sumaDeMultiplicaciones ;
        sumaDeMultiplicaciones = 1;
    }
}

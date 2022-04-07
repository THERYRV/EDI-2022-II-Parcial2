#include <stdio.h>
#include <math.h>
typedef struct puntoEnPlano{
    int x;
    int y;
}tipoPunto;

void capturaPunto(tipoPunto *punto);
void imprimePunto(tipoPunto punto);
int calculaDistanciaEntreDosPuntos(tipoPunto punto1, tipoPunto punto2);

int main(){
    int distanciaEntrePuntos;
    tipoPunto punto1, punto2;
    capturaPunto(&punto1);
    imprimePunto(punto1);
    capturaPunto(&punto2);
    imprimePunto(punto2);
    distanciaEntrePuntos = calculaDistanciaEntreDosPuntos(punto1, punto2);
    printf("La distancia entre los dos puntos es de %d", distanciaEntrePuntos);
}

void capturaPunto(tipoPunto *punto){
    printf("Ingresa la coordenada en x del punto\n");
    scanf("%d", &punto->x);
    printf("Ingresa la coordenada en y del punto\n");
    scanf("%d", &punto->y);
}

void imprimePunto(tipoPunto punto){
    printf("El punto ingresado es (%d, %d)\n", punto.x, punto.y);
}

int calculaDistanciaEntreDosPuntos(tipoPunto punto1, tipoPunto punto2){
    int distancia;
    distancia = sqrt((pow((punto1.x - punto2.x), 2)) + (pow((punto1.y - punto2.y), 2)));
    return distancia;
}

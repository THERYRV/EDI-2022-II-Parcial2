#include <stdio.h>
typedef struct fecha{
    int dia;
    char mes[9];
    int year;
} tipoFecha;

void capturaFecha(tipoFecha *fecha);
void conviertePrimeraLetraAMayuscula(tipoFecha *fecha);
void imprimeFecha(tipoFecha fecha);

int main(){
    tipoFecha fecha;
    capturaFecha(&fecha);
    conviertePrimeraLetraAMayuscula(&fecha);
    imprimeFecha(fecha);
}

void capturaFecha(tipoFecha *fecha){
    printf("Ingresa el numero del dia de hoy\n");
    scanf("%d", &fecha->dia);

    printf("Ingresa el nombre del mes\n");
    scanf("%s[^\n]", fecha->mes);

    printf("Ingresa el año\n");
    scanf("%d", &fecha->year);
}

void conviertePrimeraLetraAMayuscula(tipoFecha *fecha){
    switch (fecha->mes[0]) {//  m  j   s  n d
        case 'a': fecha->mes[0] = 'A';
            break;
        case 'e': fecha->mes[0] = 'E';
            break;
        case 'f': fecha->mes[0] = 'F';
            break;
        case 'o': fecha->mes[0] = 'O';
            break;
        case 'u': fecha->mes[0] = 'U';
            break;
        case 'm': fecha->mes[0] = 'M';
            break;
        case 'j': fecha->mes[0] = 'J';
            break;
        case 's': fecha->mes[0] = 'S';
            break;
        case 'n': fecha->mes[0] = 'N';
            break;
        case 'd': fecha->mes[0] = 'D';
            break;
    }
}

void imprimeFecha(tipoFecha fecha){
    printf("%d/%s/%d", fecha.dia, fecha.mes, fecha.year);
}
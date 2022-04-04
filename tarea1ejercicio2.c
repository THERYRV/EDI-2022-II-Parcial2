#include <stdio.h>
int fibonacci(int n);

int main(){
    int n, resultado;
    printf("Ingresa el numero \n");
    scanf("%d", &n);
    resultado = fibonacci(n);
    printf("%d", resultado);
}

int fibonacci(int n)
{
    if(n <= 1)
        return n;

    return fibonacci(n-1) + fibonacci(n - 2);
}
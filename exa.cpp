#include <stdio.h>
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    int resultado = potencia(base, exponente);
    printf("%d elevado a la %d es igual a %d\n", base, exponente, resultado);
    
    return 0;
}

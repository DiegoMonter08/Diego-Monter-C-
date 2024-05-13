#include <stdio.h>

int main() {
    int a, b, e;
    int suma;

    printf("Introduce el valor de a: ");
    scanf("%d", &a);

    printf("Introduce el valor de b: ");
    scanf("%d", &b);

    printf("Introduce el valor de e: ");
    scanf("%d", &e);

    suma = a + b + e;

    printf("La suma de %d, %d y %d es %d\n", a, b, e, suma);
return 0;
}

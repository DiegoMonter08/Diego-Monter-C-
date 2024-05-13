#include <stdio.h>

int main() {
    int n, i;
    
    printf("Ingrese la cantidad de términos a mostrar: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Ingrese un número positivo.\n");
    }
    
    printf("La serie es: ");
    for(i = 1; i <= n; i++) {
        printf("%d", i * 5); 
        if(i < n)
            printf(", "); 
    }
    printf("\n");
    
    return 0;
}


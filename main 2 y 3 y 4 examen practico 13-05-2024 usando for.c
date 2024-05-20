#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;
    char grado_grupo[5];
    int numero_lista;
    int cantidad;
    float precio_unitario;
    float importe_total = 0;
    int i;

    while(intentos > 0) {
        printf("Introduce tu nombre de usuario: ");
        scanf("%s", nombre);
        printf("Introduce tu contraseña (grado_grupo+numero_lista): ");
        scanf("%s", contrasena);

        if(strcmp(contrasena, "2bmpg") == 0 || strcmp(contrasena, "28") == 0) {
            printf("Bienvenido al sistema.\n");
            break;
        } else {
            printf("Nombre de usuario o contraseña incorrectos. Intentos restantes: %d\n", intentos - 1);
            intentos--;
        }
    }

    if(intentos == 0) {
        printf("Se ha superado el número de intentos permitido.\n");
        return 0;
    }

    printf("\nIngrese la cantidad de unidades vendidas (0 para terminar): ");
    for(i = 1; ; i++) {
        scanf("%d", &cantidad);

        if(cantidad == 0) {
            break;
        }

        printf("Ingrese el precio unitario del articulo: ");
        scanf("%f", &precio_unitario);

        if(cantidad < 0 || precio_unitario < 0) {
            printf("La cantidad y el precio unitario deben ser numeros positivos.\n");
            i--; 
            continue;
        }

        importe_total += cantidad * precio_unitario;
    }

    printf("\nEl importe total de la factura es: %.2f\n", importe_total);

    return 0;
}

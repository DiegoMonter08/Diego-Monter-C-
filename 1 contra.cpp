#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];
    char contrasena[50];
    int intentos = 3;

    while(intentos > 0) {
        printf("Introduce tu nombre de usuario: ");
        scanf("%s", nombre);
        printf("Introduce tu contrasena: ");
        scanf("%s", contrasena);

        if(strcmp(nombre, "root") == 0 && strcmp(contrasena, "1234") == 0) {
            printf("Bienvenido al sistema.\n");
            break;
        } else {
            printf("Nombre de usuario o contrasena incorrectos. Intentos restantes: %d\n", intentos - 1);
            intentos--;
        }
    }

    if(intentos == 0) {
        printf("Se ha superado el numero de intentos permitido.\n");
    }
return 0;
}

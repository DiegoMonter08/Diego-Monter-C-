#include <stdio.h>
#include <math.h>
int main() {
	int elev, n, r;
	printf("Ingrese el numero que desea elevar: ");
	scanf("%d", &n);
	printf("Ingrese la potencia a la que desea elevar su numero: ");
	scanf("%d", &elev);
	r = pow(n, elev);
	printf("El resultado es: %d",r);
	return 0;
}

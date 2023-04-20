#include <stdio.h>

int main() {
    int numero, digito;
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    printf("Los componentes numericos de %d son: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

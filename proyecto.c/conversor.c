#include <stdio.h>


void convertirMoneda(float cantidad, char origen, char destino) {
    float tasaCambio = 1.0;

    // Definir las tasas de cambio entre monedas
    if (origen == 'Q' && destino == 'D') {
        tasaCambio = 0.13; // 1 quetzal a dólares
    } else if (origen == 'Q' && destino == 'E') {
        tasaCambio = 0.12; // 1 quetzal a euros
    } else if (origen == 'D' && destino == 'Q') {
        tasaCambio = 7.7; // 1 dólar a quetzales
    } else if (origen == 'D' && destino == 'E') {
        tasaCambio = 0.92; // 1 dólar a euros
    } else if (origen == 'E' && destino == 'Q') {
        tasaCambio = 8.4; // 1 euro a quetzales
    } else if (origen == 'E' && destino == 'D') {
        tasaCambio = 1.09; // 1 euro a dólares
    } else {
        printf("Conversión no válida.\n");
        return;
    }

    float resultado = cantidad * tasaCambio;
    printf("La cantidad convertida es: %.2f\n", resultado);
}

int main() {
    char origen, destino;
    float cantidad;

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    printf("Ingrese la moneda de origen (Q para quetzales, D para dólares, E para euros): ");
    scanf(" %c", &origen);

    printf("Ingrese la moneda de destino (Q para quetzales, D para dólares, E para euros): ");
    scanf(" %c", &destino);

    convertirMoneda(cantidad, origen, destino);

    return 0;
}





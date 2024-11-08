#include <stdio.h>

int main() {
    float base, altura, area;

    // Solicita la base del rectángulo
    printf("Introduce la base del rectángulo: ");
    scanf("%f", &base);

    // Solicita la altura del rectángulo
    printf("Introduce la altura del rectángulo: ");
    scanf("%f", &altura);

    // Calcula el área
    area = base * altura;

    // Muestra el resultado
    printf("El área del rectángulo es: %.2f\n", area);

    return 0;
}


#include <stdio.h>
#define PI 3.1415

int main() {
    double perimetro, area, raio;
    printf("Digite o raio da circuferencia \n");
    scanf("%lf", &raio);

    perimetro = PI * raio * raio;
    area = 2 * PI * raio;

    printf("Perimetro calculado: %.2lf \n", perimetro);
    printf("Area calculada: %.2lf \n", area);

    return 0;
}

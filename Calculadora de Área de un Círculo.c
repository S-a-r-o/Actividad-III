#include <stdio.h>
#include <math.h>

int main() {
    float radio;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    float area = M_PI * pow(radio, 2);
    printf("El área del círculo es: %f\n", area);
    return 0;
}

#include <iostream>
#include <cmath>

int main() {
    float radio;
    std::cout << "Ingrese el radio del círculo: ";
    std::cin >> radio;
    float area = M_PI * std::pow(radio, 2);
    std::cout << "El área del círculo es: " << area << std::endl;
    return 0;
}

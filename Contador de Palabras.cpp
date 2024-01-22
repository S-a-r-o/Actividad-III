#include <iostream>
#include <string>

int main() {
    std::string frase;
    std::cout << "Ingrese una frase: ";
    std::getline(std::cin, frase);
    int contador_palabras = 0;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\t') {
            contador_palabras++;
        }
    }
    std::cout << "Número de palabras: " << contador_palabras + 1 << std::endl;
    return 0;
}

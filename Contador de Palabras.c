#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    printf("Ingrese una frase: ");
    gets(frase);
    int contador_palabras = 0;
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\t') {
            contador_palabras++;
        }
    }
    printf("Número de palabras: %d\n", contador_palabras + 1);
    return 0;
}

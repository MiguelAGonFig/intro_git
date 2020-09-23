#include <stdio.h>

int main()
{
    char nombre[100];
    unsigned int edad;

    // printf("Hello World!");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u años", edad+1);

    return 0;
}
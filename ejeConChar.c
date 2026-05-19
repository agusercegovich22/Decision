#include <stdio.h>

int main{
    int edad;
    char nacionalidad;

    printf("Ingrese la edad");
    scanf("%d", &edad);

    printf("Ingrese la nacionalidad (A arg, E ext:");
    //Limpiar el buffer de teclado
    //fflush(stdin); //borra todo el buffer de teclado(no funciona en todos los compiladores, no es estándar)
    getchar(); //borra el enter residual(toma el último caracter del buffer)
    scanf("%c", nacionalidad); // nacionalidad = getchar(); (de esta forma es lo mismo que usar scanf)
    if(edad>=18)
}

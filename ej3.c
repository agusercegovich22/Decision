/*Ingresar un carácter e indicar si es o no una vocal,
 debe considerarse tanto mayúsculas como minúsculas.
*/

#include <stdio.h>

int main(){
    char letra;
    printf("Ingresar un caracter ");
    scanf("%c", &letra);
    letra = toupper(letra);
    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        printf("El caracter %c es una vocal", letra);
    else
        printf("El caracter %c no es una vocal: ", letra);
    return 0;
}

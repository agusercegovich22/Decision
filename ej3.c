/*Ingresar un carácter e indicar si es o no una vocal,
 debe considerarse tanto mayúsculas como minúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para toupper pasa a mayúscula, tolower pasa a minúsculas

int main(){
    char letra, letraM;
    printf("Ingresar un caracter ");
    scanf("%c", &letra);
    letraM = toupper(letra);
    if(letraM == 'A' || letraM == 'E' || letraM == 'I' || letraM == 'O' || letraM == 'U')
        printf("El caracter %c es una vocal", letra);
    else
        printf("El caracter %c no es una vocal: ", letra);
    printf("\n");
    system("pause");
    return 0;
}


#include <stdio.h>

int main (void)
{
    FILE *archivo;
    char caracter;

    archivo = fopen("hola.txt","r"); /*Definimos el nombre del archivo que utilizaremos, además de colocar qué haremos con el archivo (Revisar cada mod)*/

    while (!feof(archivo))
    {
        caracter = fgetc(archivo);
        putchar(caracter);
    }
    
    fclose(archivo);

    return 0;
}

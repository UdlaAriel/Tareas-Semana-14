#include <stdio.h>

int main (void)
{
    FILE *archivo;
    char caracter;
    
    
    archivo = fopen("prueba.txt","w"); /*Definimos el nombre del archivo que utilizaremos, además de colocar qué haremos con el archivo (Revisar cada nodo)*/
    
    fputs("Esta es una prueba de escritura",archivo);

    /*
    while (!feof(archivo))
    {
        caracter = fgetc(archivo);
        putchar(caracter);
    }
    */

    fclose(archivo);

    return 0;
}

#include <stdio.h>

#define MAX 20

int main (void)
{
    struct datosPersonales
    {
        char nombre[MAX];
        char direccion[MAX];
        char carrera[MAX];
        float promedio;
    } datos;
    
    printf("Ingrese su nombre: ");
    gets(datos.nombre);

    printf("Ingrese su direccion: ");
    gets(datos.direccion);

    printf("Ingrese su carrera: ");
    gets(datos.carrera);

    printf("Ingrese su promedio: ");
    scanf("%f",&datos.promedio);

    FILE *archivo;
    char caracter;
    
    archivo = fopen("estructura2.txt","w"); /*Definimos el nombre del archivo que utilizaremos, además de colocar qué haremos con el archivo (Revisar cada nodo)*/
    fputs(datos.nombre,archivo);
    fputs(datos.direccion,archivo);
    fputs(datos.carrera,archivo);

    fprintf(archivo, "%.2f", datos.promedio);
    // fputs(datos.promedio,archivo);

    fclose(archivo);

    return 0;
}
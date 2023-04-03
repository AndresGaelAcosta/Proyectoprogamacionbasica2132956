#include <iostream>
#include <string>
#include <cstdlib>
#include <wchar.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

struct Articulo {
    int numero = 0;
    string descripcion;
    string genero;
    string clasificacion;
    string consola;
};

Articulo altaArticulos() {
    Articulo articulo;
    printf("Numero de articulo: ");
    if (scanf_s("%d", &articulo.numero) != 1) {
        printf("Error al leer el numero de articulo.\n");
        articulo.numero = 0;
    }
    cin.ignore();
    printf("Descripcion: ");
    getline(cin, articulo.descripcion);
    printf("Genero: ");
    getline(cin, articulo.genero);
    printf("Clasificacion: ");
    getline(cin, articulo.clasificacion);
    printf("Consola: ");
    getline(cin, articulo.consola);
    return articulo;
}

void listaArticulos(Articulo articulos[], int numArticulos) {
    printf("Lista de articulos:\n");
    for (int i = 0; i < numArticulos; i++) {
        printf("Articulo %d:\n", i + 1);
        printf("Numero de articulo: %d\n", articulos[i].numero);
        printf("Descripcion: %s\n", articulos[i].descripcion.c_str());
        printf("Genero: %s\n", articulos[i].genero.c_str());
        printf("Clasificacion: %s\n", articulos[i].clasificacion.c_str());
        printf("Consola: %s\n", articulos[i].consola.c_str());
        printf("\n");
    }
}

int main() {
    const int MAX_ARTICULOS = 3;
    Articulo articulos[MAX_ARTICULOS];
    int numArticulos = 0;
    int opcion;

    while (true) {
        printf("Bienvenido Al Menu seleccione una de las siguientes opciones:\n");
        printf("1.Alta de articulos\n");
        printf("2.Modificacion de articulos\n");
        printf("3.Baja de articulos\n");
        printf("4.Lista de articulos\n");
        printf("5.Limpiar pantalla\n");
        printf("6.Salir\n");
        printf("Elija una opcion: ");
        if (scanf_s("%d", &opcion) != 1) {
            printf("Error al leer la opcion.\n");
            opcion = 0;
        }

        switch (opcion) {
        case 1:
            if (numArticulos < MAX_ARTICULOS) {
                articulos[numArticulos] = altaArticulos();
                numArticulos++;
                printf("Articulo dado de alta correctamente.\n");
            }
            else {
                printf("No se pueden dar de alta mas articulos.\n");
            }
            break;
        case 2:
            printf("Modificacion de articulos seleccionada.\n");
            break;
        case 3:
            printf("Baja de articulos seleccionada.\n");
            break;
        case 4:
            listaArticulos(articulos, numArticulos);
            break;
        case 5:
            system("cls");
            break;
        case 6:
            printf("Fin del programa\n");
            return 0;
        default:
            printf("Opcion invalida.\n");
            break;
        }
    }

    return 0;
}

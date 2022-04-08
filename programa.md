#include <stdio.h>
#define TAM_MAX_DATOS 100
struct TDatos {
    char nombre[50];
    };
int main () {
    struct TDatos datos[TAM_MAX_DATOS];
    int contador;
    int i;
    char opcion;

    printf("Bienvenido a 'En algun lugar de la ETSIDI'. En este juego tendra que salir de la Etsidi y llegar a la provincia de \n Guadalajara, pero no va a ser tan facil ya que a lo largo del juego le iran apareciendo diferentes preguntas y retos\n");

    fflush(stdin);
    printf("Elige la opcion deseada:\n");
    printf("J - Jugar:\n");
    printf("S - salir\n");
    scanf("%c", &opcion);
    switch(opcion) {
        case 'J':
            printf("Estás listo?\n");
            printf("Indica el numero de jugadores:\n");
            scanf("%d", &contador);
            for(i=0;i<contador;i++){
                printf("Introduce el nombre del jugador %d:\n", i);
                scanf("%s", datos[i].nombre);
                }
            printf("Empieza el juego\n");
            break;

        case 'S':
            printf("Fin del juego");

    }

return 0;

}

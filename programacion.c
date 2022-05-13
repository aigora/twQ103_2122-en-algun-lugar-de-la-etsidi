#include <stdio.h>
#define TAM_MAX_DATOS 100
#include <string.h>

struct TDatos {
    char nombre[50];
    char apellido[50];
    int edad;
    char signoZodiaco[50];
    char heladoFav[50];
    char legumbreFav[50];
    char superFav[50];
    char estilo[50];
    int numFav;
};

int main () {
//Menú
int contador;
int i;
char opcion;
// Acertijo 1
int resultado;
// Acertijo 2
char respuesta[100];
int comparacion;
//Acertijo 3
char llave[5] = {"l, l, a, v, e"};
char palabra[50];
//Acertijo 4
FILE * pfichero;
char eleccion;
char transporte[50];
//Acertijo 5
char answer[50];
//Acertijo 6
int numanden;


printf("Bienvenido a 'En algun lugar de la ETSIDI'. En este juego tendra que salir de la Etsidi y llegar a la provincia de \nGuadalajara, pero no va a ser tan facil ya que a lo largo del juego le iran apareciendo diferentes preguntas y retos\n");

fflush(stdin);
printf("Elige la opcion deseada:\n");
printf("J - Jugar:\n");
printf("S - salir\n");
scanf("%c", &opcion);
switch(opcion) {
    case 'J':
    case 'j':
        printf("Estas listo?\n");
        printf("Indica el numero de jugadores:\n");
        scanf("%d", &contador);
        for(i=0;i<contador;i++){
            printf("Introduce el nombre del jugador %d:\n", i+1);
            scanf("%s", datos[i].nombre);
            }
        printf("Empieza el juego\n");
        break;

    case 'S':
    case 's':
        printf("Fin del juego\n");
        return 0;

}

printf("Estas en una de las plantas de la ETSIDI. La primera prueba consistira en adivinar que planta es.\n");

printf("Para ello, resuelve la siguiente operacion matematica: ((34+2*exp(0))/9)-(4*2).\n");

do{
    printf("Resultado: ");
    scanf("%d", &resultado);

}while(resultado != 1);

printf("Por lo que veo se te dan bien las mates!\nPasas a la siguiente prueba.\n");

printf("Estas en la misma planta que la cafeteria, un lugar donde los estudiantes se resguardan del frio en el recreo y donde se calienta la comida.\nNecesitas algo de alimento para poder seguir con el juego. Para ello resuelve el siguiente acertijo:\n");

printf("Se trata de una alimento sano, una palabra en singular, que puede tener los colores del semaforo y que aparece en una pelicula Disney.\n");

comparacion = strcmp('manzana', respuesta);

do {
    printf("Respuesta: ");
    gets(respuesta);
} while (comparacion != 0);



/*do{
    fflush(stdin);
    printf("Escribe la respuesta: ");
    gets(respuesta);
}while(respuesta[i] != 'Manzana' || respuesta[i] != 'manzana');

printf("Disfruta de tu manzana!\n");
*/
if (contador == 1){
    printf("Dirigete hacia la puerta bajando las escaleras.\n");
} else {
    printf("Dirigios hacia la puerta bajando las escaleras.\n");
}

printf("OH NO! La puerta esta cerrada. Para salir sera necesario encontrar la llave.\n");

printf("Para conseguirla se necesitan buscar 5 palabras que cumplan las siguientes condiciones y solamente hay 1 intento: \n");

printf("Palabra 1: introducir una palabra cuya primera letra sea la L.\n");
gets(palabra);

if (palabra[0] == 'l') {
    printf("Muy bien! Seguimos.\n");
} else {
    printf("Fatal! Bueno... continuamos.\n");
}

printf("Palabra 2: introducir una palabra cuya segunda letra sea la L.\n");
gets(palabra);

if (palabra[1] == 'l') {
    printf("Muy bien! Seguimos.\n");
} else {
    printf("Fatal! Bueno... continuamos.\n");
}

printf("Palabra 3: introducir una palabra cuya tercera letra sea la A.\n");
gets(palabra);

if (palabra[2] == 'a') {
    printf("Muy bien! Seguimos.\n");
} else {
    printf("Fatal! Bueno... continuamos.\n");
}

printf("Palabra 4: introducir una palabra cuya cuarta letra sea la V.\n");
gets(palabra);

if (palabra[3] == 'v') {
    printf("Muy bien! Seguimos.\n");
} else {
    printf("Fatal! Bueno... continuamos.\n");
}

printf("Palabra 5: introducir una palabra cuya quinta letra sea la E.\n");
gets(palabra);

if (palabra[4] == 'e') {
    printf("Muy bien! Seguimos.\n");
} else {
    printf("Fatal! Bueno... continuamos.\n");
}

printf("Genial! Has conseguido la llave. Por fin fuera de la ETSIDI. Es hora de elegir transporte para llegar a Atocha.\nHay 3 opciones, se debera elegir una sin saber cual es:\n");
scanf("%c", &eleccion);

pfichero = fopen("Transporte.txt", "r");
    if (pfichero == NULL){
        printf("Error en la apertura del fichero\n");
        return 0;
    }

switch(eleccion) {
    case 'A':
        printf("Has elegido la opcion de ir andando.Pero... Que lastima, te has tropezado\n");
        break;

    case 'B':
        printf("Has elegido la opcion de ir en bus.Pero... No me lo puedo creer, el bus no llega\n");
        break;

    case 'C':
        printf("Has elegido la opcion de ir en tren.Pero... No me lo puedo creer, ha habido una averia\n");
}

fclose(pfichero);

printf("Resuelve este acertijo para conseguir llegar a Atocha\n");

printf("Donna Loli, una vecina de mi abuela, pregunta que bus hay que coger para llegar a una plaza con nombre de Diosa donde el Real Madrid celebra sus victorias.\nSugerencia: mirar la app de buses.\n");
scanf("%s", answer);

do{
    printf("Si la respuesta no ha sido 'Cibeles' dejame decirte que falta cultura en mitologia y en futbol\n");

}while(answer != 'Cibeles' || answer != 'cibeles');

printf("Muy bien por ayudar a Loli. Has llegado a Atocha.\nDebido a un problema tecnico las pantallas no funcionan y no se pueden ver los andenes de los trenes.\n Habra que resolver un ultimo acertijo para saber cual es el anden correcto.\n");
printf("El numero correspondiente al anden es uno de los tres que compone el anden de Harry Potter, y sin querer ya te lo he dicho.\n");
scanf("%d", &numanden);


return 0;
}


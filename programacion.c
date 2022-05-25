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
struct TDatos persona[TAM_MAX_DATOS];
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
int compar;
//Acertijo 6
int numanden;


printf("Bienvenido a 'En algun lugar de la ETSIDI'. En este juego tendra que salir de la Etsidi y llegar a la provincia de \nGuadalajara, pero no va a ser tan facil ya que a lo largo del juego le iran apareciendo diferentes preguntas y retos\n");

fflush(stdin);
printf("Elige la opcion deseada:\n");
printf("J - Jugar:\n");
printf("S - Salir\n");
scanf("%c", &opcion);
switch(opcion) {
    case 'J':
    case 'j':
        printf("Estas listo?\n");
        printf("Indica el numero de jugadores:\n");
        scanf("%d", &contador);
        for(i=0;i<contador;i++){
            printf("Introduce el nombre del jugador %d:\n", i+1);
            scanf("%s", persona[i].nombre);
            }
        printf("Empieza el juego\n\n");
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


do {
    fflush(stdin);
    printf("Respuesta: ");
    gets(respuesta);
    comparacion = strcmp("manzana", respuesta);


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

printf("Genial! Has conseguido la llave. Por fin fuera de la ETSIDI. Es hora de elegir transporte para llegar a Atocha.\nHay 3 opciones: A, B o C. Se debera elegir una sin saber cual es:\n");
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


//do{
   // printf("Si la respuesta no ha sido 'Cibeles' dejame decirte que falta cultura en mitologia y en futbol\n");

//}while(answer != "Cibeles" || answer != "cibeles");


do {
    fflush(stdin);
    printf("Donna Loli, una vecina de mi abuela, pregunta a donde lleva el bus C03.\nPista: la plaza tiene nombre de Diosa y es donde el Real Madrid celebra sus victorias.\nSugerencia: mirar la app de buses.\n");
    scanf("%s", answer);

    comparacion = strcmp("cibeles", respuesta);
    printf("Si la respuesta no ha sido 'Cibeles' dejame decirte que falta cultura en mitologia y en futbol\n");



} while (compar= 0);


printf("Muy bien por ayudar a Loli. Has llegado a Atocha.\nDebido a un problema tecnico las pantallas no funcionan y no se pueden ver los andenes de los trenes.\n Habra que resolver un ultimo acertijo para saber cual es el anden correcto.\n");
printf("El numero correspondiente al anden es uno de los tres que compone el anden de Harry Potter, y sin querer ya te lo he dicho.\n");
scanf("%d", &numanden);
if (numanden == 3){
    printf("Genial, es el anden 3. Dirigete hacia el anden 3 y espera hasta que llegue el tren\n");
}else {
    printf("Bueno bueno, no me lo puedo creer, el anden correcto es el 3... Dirigete hacia el anden 3 y espera a que llegue el tren\n");
    }

    printf("Una vez en el anden correcto, aparece un revisor que no parece haber tenido un buen dia\n");
    printf("En vez de pedir los billetes/bonos de transporte, hace preguntas un tanto peculiares\n");
    printf("No obstante, para subir al tren sera necesario responderlas\n");

    for(i=0; i<contador; i++) {
            printf("Introduce los siguientes datos \n");
            fflush(stdin);
            printf("Nombre: ");
            scanf("%c", &persona[i].nombre);
            fflush(stdin);
                  printf("Apellido: ");
               scanf("%c", &persona[i].apellido);
               fflush(stdin);
                     printf("Edad: ");
                  scanf("%d", &persona[i].edad);
                  fflush(stdin);
                        printf("Cual es tu signo del zodiaco?: ");
                     scanf("%s", persona[i].signoZodiaco);
                        fflush(stdin);
                           printf("Cual es tu sabor de helado favorito?: ");
                        scanf("%c", &persona[i].heladoFav);
                        fflush(stdin);
                              printf("Que legumbre es tu favorita?: ");
                           scanf("%s", persona[i].legumbreFav);
                           fflush(stdin);
                                 printf("En que supermercado te gusta mas comprar?: ");
                              scanf("%c", &persona[i].superFav);
                              fflush(stdin);
                                    printf("Con que estilo arquitectonico te ves hoy?: ");
                                 scanf("%s", persona[i].estilo);
                                 fflush(stdin);
                                       printf("Cual es tu numero de la suerte?: ");
                                    scanf("%d", &persona[i].numFav);
    }
    printf("Enhorabuena, el revisor se ha marchado y por lo tanto, el juego ha sido superado con exito. Muchas gracias por jugar y nos vemos en la proxima\n");


return 0;
}

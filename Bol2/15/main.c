/* EJ.15-BOL.02
 * OBJETIVOS: Plantee e implemente un programa en Lenguaje C que presente el menú que se
 *            especifica a continuación y que, según sea el carácter introducido por el
 *            usuario, escriba en pantalla BEBÉ, ADOLESCENTE, MUJER, HOMBRE.
 * IN: carácter (b, a, m ,h).
 * OUT: mensaje.
 */


#include <stdio.h>
#include <stdbool.h>

void mostrarmenu();
char minuscula();
char opcion_seleccionada(char letra)


int main() {
    bool seguir=true;
    do{
        mostrarmenu();
        switch(minuscula(opcion_seleccionada()){
            case 'B': printf("BEBE");
            break;
            case 'A': printf("ADOLESCENTE");
            break;
            case 'M': printf("MUJER");
            break;
            case 'H': printf("HOMBRE");
            break;
            default: printf("ERROR, no has seleccionado una opcion posible");
            break;
        }
    }
    return 0;
}

mostrarmenu(){
    
}
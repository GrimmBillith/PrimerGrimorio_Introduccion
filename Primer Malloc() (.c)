#include <stdio.h>
#include <stdlib.h>

int main() {
    //? El pointer serà l'encarregat de "representar" el malloc.
    int *ptr = (int *)malloc(sizeof(int) * 5);
    
    //? Si no es pot fer el memory allocation, serà error.
    if (ptr == NULL) {
        printf("ERROR: NO ES POT ASSIGNAR MEMORIA");
        exit(0);
    }
    
    //? Assignem valors enters a cada espai de la memòria.
    for (int i = 0; i < 5; i++){
        ptr[i] = i + 1;
    }   

    //? Imprimim a l'usuari per pantalla la impressió dels resultats.
    for (int i = 0; i < 5; i++){
        printf("%d ", ptr[i]);
    }

    //? Alliberem espai de memòria.
    free(ptr);

    printf("Programa finalitzat exitosament!");

    return 0;
}

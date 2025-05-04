#include <stdio.h>
#include <stdlib.h>
#define MAX 10

//TODO {2, 1 ,4 ,3, 9, 5, 7, 6, 8, 0} INCORRECTE
//TODO {9,0,3,5,6,7,8,2,1,4} CORRECTE
//TODO {2,1,4,3,9,5,7,6,8,0} INCORRECTE
//TODO {2,1,4,3,9,5,7,6,0,8} INCORRECTE
//? IMPLEMENTACIÓ IA
//TODO {2,1,4,3,9,5,7,6,0,8}
int main(){
    int desordenat[MAX]  = {2,1,4,3,9,5,7,6,0,8};
    int desordenat2[MAX] = {2,1,4,3,9,5,7,6,0,8};
    int temp;
    //?SOLUCIÓ IA: VARIABLE "swapped"
    int swapped; 
    //! Menor a major.
    printf ("\nMenor a major:\n\n");
    printf ("Desordenat:\n");
    for (int i = 0; i<MAX; i++){
        printf("%d ", desordenat[i]);
    }
    //? Espai
    printf ("\n");
    //? Ordenat
    printf ("Ordenat:\n");
    
    //? CODI PROPI
    //*
    //*     for (int i = 0; i<MAX; i++){
    //*         if (desordenat[i] > desordenat[i+1]){
    //*             printf("Intercanvio %d per %d\n", desordenat[i], desordenat[i+1]);
    //*             temp = desordenat[i+1];
    //*             desordenat[i+1] = desordenat[i];
    //*             desordenat[i] = temp;
    //*             i=0;
    //*         }
    //*     }
    //*
    //? ACABA AQUÍ EL MEU CODI

    //? CODI IA
    //? Bucle exterior: controla el nombre de "passades" sobre l'array.
    //? En cada passada, l'element més gran sense ordenar "puja" cap a la seva posició final.
    for (int i = 0; i < MAX - 1; i++) {
        //? Inicialitzem 'swapped' a 0 a l'inici de cada passada.
        //? Això assumeix que no s'han fet intercanvis en aquesta passada ENCARA.
        swapped = 0;
        //? Bucle interior: compara elements adjacents a la part no ordenada de l'array.
        //? La part no ordenada es redueix en cada passada del bucle exterior (MAX - i - 1).
        for (int j = 0; j < MAX - i - 1; j++) {
            //? Comparem l'element actual amb el següent.
            if (desordenat[j] > desordenat[j + 1]) {
                //? Intercanviem els elements si estan en l'ordre incorrecte.
                printf("Intercanvio %d per %d\n", desordenat[j], desordenat[j + 1]);
                temp = desordenat[j];
                desordenat[j] = desordenat[j + 1];
                desordenat[j + 1] = temp;
                //? Marquem 'swapped' com a 1 per indicar que s'ha fet un intercanvi en aquesta passada.
                swapped = 1;
            }
        }
        //? Després de cada passada del bucle interior, verifiquem si s'ha fet algun intercanvi.
        //? Si 'swapped' continua sent 0, significa que l'array ja està ordenat,
        //? i podem sortir del bucle exterior anticipadament per optimitzar.
        if (swapped == 0) {
            break;
        }
    }
    //? ACABA AQUÍ LA IA


    for (int i = 0; i<MAX; i++){
        printf("%d ", desordenat[i]);
    }
    //! Major a menor.
    printf ("\nMajor a menor:\n\n");
    
    printf ("Desordenat:\n");
    for (int i = 0; i<MAX; i++){
        printf("%d ", desordenat2[i]);
    }
    printf ("\n");
    printf ("Ordenat:\n");

    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (desordenat2[j] < desordenat2[j + 1]) {
                temp = desordenat2[j];
                desordenat2[j] = desordenat2[j + 1];
                desordenat2[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i<MAX; i++){
        printf("%d ", desordenat2[i]);
    }
    
    printf ("\n");
    printf("\nMenor a major\n");
    for (int i = 0; i<MAX; i++){
        printf("%d ", desordenat[i]);
    }
    printf("\nMajor a menor\n");
    for (int i = 0; i<MAX; i++){
        printf("%d ", desordenat2[i]);
    }

    return 0;
}

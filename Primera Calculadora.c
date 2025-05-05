#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5
#define MIN 1
void presentacio(int* opcio_usuari){
    int opcio;

    printf("Benvingut al primer projecte per a GitHub, la calculadora!\n");
    printf("[1] --> Sumar\n");
    printf("[2] --> Restar\n");
    printf("[3] --> Multiplicar\n");
    printf("[4] --> Dividir\n");
    printf("[5] --> Sortir\n");
    scanf("%d", opcio_usuari);
    opcio = *opcio_usuari;
    while(opcio < MIN || opcio > MAX){
        printf("ERROR: Introdueix un valor valid!: ");
        scanf("%d", opcio_usuari);
        opcio = *opcio_usuari;
    }
    //? Suponem que l'usuari sempre introduirà valors enters.
}

void escollir(int* num1, int* num2){
    printf("Introdueix el primer valor: ");
    scanf("%d", num1);
    printf("Introdueix el segon valor: ");
    scanf("%d", num2);
}

int sumar(int num1, int num2){
    //? Suponem que l'usuari sempre introduirà valors enters.
    return(num1+num2);
}
int restar(int num1, int num2){
    //? Suponem que l'usuari sempre introduirà valors enters.
    return(num1-num2);
}
int multiplicar(int num1, int num2){
    //? Suponem que l'usuari sempre introduirà valors enters.
    return(num1*num2);
}
bool pre_divisio(int num2f){
    bool valid = false;
     //? Suponem que l'usuari sempre introduirà valors enters.
    if (num2f == 0){
        printf("No es pot dividir entre 0!\n");
    }
    else{
        valid = true;
    }

    return valid;
}
float dividir(float* num1f, float* num2f){
    //? Suponem que l'usuari sempre introduirà valors enters.
    float num1, num2;
    num1 = *num1f;
    num2 = *num2f;
    return(num1/num2);
}
int main(){
    //! Primer programa per a GitHub.
    //TODO
    int num1, num2;
    int suma, resta, multiplicacio;
    float num1f, num2f;
    float divisio;
    int opcio_usuari = 0;
    while(opcio_usuari != 5){
        presentacio(&opcio_usuari);
        switch (opcio_usuari)
        {
        case 1:
            escollir(&num1, &num2);
            suma = sumar(num1, num2);
            printf("La suma de %d i %d es: %d\n",num1, num2, suma);
            break;
        case 2:
            escollir(&num1, &num2);
            resta = restar(num1, num2);
            printf("La resta de %d i %d es: %d\n",num1, num2, resta);
            break;
        case 3:
            escollir(&num1, &num2);
            multiplicacio = multiplicar(num1, num2);
            printf("La multiplicacio de %d i %d es: %d\n",num1, num2, multiplicacio);
            break;
        case 4:
            printf("Introdueix el primer valor: ");
            scanf("%f", &num1f);
            printf("Introdueix el segon valor: ");
            scanf("%f", &num2f);
            if (pre_divisio(num2f)){
                divisio = dividir(&num1f, &num2f);
                printf("La divisio de %.0f i %.0f es: %.2f\n",num1f, num2f, divisio);
            }
            else{
                printf("Cabro! No tolerare que triguis de dividir entre cero, o ets idiota o de debo vols probar si ho he fet be eh? Doncs el programa finalitza per idiota!\n");
                opcio_usuari = 5;
            }
            break;
        case 5:
            printf("Adeu!\n");
            opcio_usuari=5;
            break;
        }
    }
    printf("Fi del programa.\n");
    return 0;
}

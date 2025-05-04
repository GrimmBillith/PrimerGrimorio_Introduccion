#include <stdio.h>
#include <stdlib.h>

long long* factorial_recursiu_malloc(int n) {
    long long* resultat;

    if (n == 0) {
        resultat = (long long*)malloc(sizeof(long long));
        if (resultat == NULL) {
            perror("Error al assignar memoria");
            exit(EXIT_FAILURE);
        }
        *resultat = 1;
        return resultat;
    } else if (n < 0) {
        printf("Error: El factorial no està definit per a nombres negatius.\n");
        exit(EXIT_FAILURE);
    } else {
        long long* resultat_anterior = factorial_recursiu_malloc(n - 1);
        resultat = (long long*)malloc(sizeof(long long));
        if (resultat == NULL) {
            perror("Error al assignar memoria");
            exit(EXIT_FAILURE);
        }
        *resultat = n * (*resultat_anterior);

        //? Alliberem la memòria del resultat anterior
        free(resultat_anterior); 
        return resultat;
    }
}

int main() {
    int num;
    printf("Introdueix un nombre enter no negatiu per calcular el seu factorial: ");
    scanf("%d", &num);

    long long* resultat_ptr = factorial_recursiu_malloc(num);

    if (resultat_ptr != NULL) {
        printf("El factorial de %d es: %lld\n", num, *resultat_ptr);
        //? Alliberem la memòria del resultat final
        free(resultat_ptr); 
    }

    return 0;
}

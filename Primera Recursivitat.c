#include <stdio.h>
#include <stdlib.h>

//! 1. Factorial d’un nombre*
//? long long per si el valor és massa gran-
long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }   
}

//! 2. Suma dels dígits d’un nombre
int suma_digits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + suma_digits(n / 10);
    }
}

//! 3. Càlcul d’una potència
//? Lo mateix que la factorial del long long.
long long potencia(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * potencia(base, exponent - 1);
    }
}

//! 4. Seqüència de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
//? Prova de la funció factorial
    int num_factorial = 5;
    printf("El factorial de %d és: %lld\n", num_factorial, factorial(num_factorial));

//? Prova de la funció suma_digits
    int num_digits = 12345;
    printf("La suma dels dígits de %d és: %d\n", num_digits, suma_digits(num_digits));

//? Prova de la funció potencia
    int base = 2;
    int exponent = 5;
    printf("%d elevat a %d és: %lld\n", base, exponent, potencia(base, exponent));

//? Prova de la funció Fibonacci
    int n_fibonacci = 10;
    printf("La seqüència de Fibonacci fins a la posició %d és:\n", n_fibonacci);
    for (int i = 0; i <= n_fibonacci; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

return 0;
}

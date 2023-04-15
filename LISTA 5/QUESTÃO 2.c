#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
unsigned long long int calcularFatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int num = 30;  // Número para calcular o fatorial
    unsigned long long int fatorial;

    fatorial = calcularFatorial(num);

    printf("O fatorial de %d é: %llu\n", num, fatorial);

    return 0;
}

#include <stdio.h>

// Fun��o recursiva para calcular o fatorial de um n�mero
unsigned long long int calcularFatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int num = 30;  // N�mero para calcular o fatorial
    unsigned long long int fatorial;

    fatorial = calcularFatorial(num);

    printf("O fatorial de %d �: %llu\n", num, fatorial);

    return 0;
}

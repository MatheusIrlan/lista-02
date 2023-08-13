#include <stdio.h>

// Função f(m, n) definida por partes
int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return f(m, n - 1) + f(m - 1, n);
    }
}

int main() {
    int m = 3;
    int n = 4;

    int resultado = f(m, n);
    printf("O resultado de f(%d, %d) eh: %d\n", m, n, resultado);

    return 0;
}

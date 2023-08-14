/*Um numero inteiro ´e considerado um n´umero perfeito se seus fatores, incluindo 1 (mas n˜ao o
proprio numero), somam o numero. Por exemplo, 6 ´e um n´umero perfeito porque 6 = 1 + 2 + 3.
Escreva uma funcao isPerfect que determina se o n´umero do parˆametro ´e um n´umero perfeito. Use
esta funcao em um programa que determina e imprime todos os numeros perfeitos entre 1 e 1000.
Imprima os fatores de cada numero perfeito para confirmar que o numero ´e realmente perfeito.
*/
#include <stdio.h>

int isPerfect(int n) {
    int i;
    int soma = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma == n;
}

int main() {
    int i, j;
    printf("Numeros perfeitos entre 1 e 1000:\n");

    for (i = 2; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d eh um numero perfeito. Fatores:", i);
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf(" %d", j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
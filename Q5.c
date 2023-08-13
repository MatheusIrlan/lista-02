#include <stdio.h>

/*produtoRecursivo(3, 4) = 4 + produtoRecursivo(2, 4)
                        = 4 + (4 + produtoRecursivo(1, 4))
                        = 4 + (4 + (4 + produtoRecursivo(0, 4)))
                        = 4 + (4 + (4 + 0))
                        = 4 + (4 + 4)
                        = 4 + 8
                        = 12
*/

int produtoRecursivo(int x1, int x2) {
    if (x1 == 0) {
        return 0;
    }
    return x2 + produtoRecursivo(x1 - 1, x2);
}

int main() {
    int x1, x2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x1, &x2);

    int resultado = produtoRecursivo(x1, x2);
    
    printf("O produto de %d e %d eh: %d\n", x1, x2, resultado);

    return 0;
}

//Defina uma função para inverter um núumero. Exemplo:
//f(1234) = 4321
//(a) No formato não recursivo;
//(b) No formato recursivo.
/*
#include <stdio.h>

int inverterNumeroNaoRecursivo(int num) {
    int invertido = 0;
    
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    
    return invertido;
}

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    int invertido = inverterNumeroNaoRecursivo(numero);
    
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}
*/
/*
#include <stdio.h>

int inverterNumeroRecursivo(int num, int invertido) {
    if (num == 0) {
        return invertido;
    } else {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        return inverterNumeroRecursivo(num / 10, invertido);
    }
}

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    int invertido = inverterNumeroRecursivo(numero, 0);
    
    printf("Número invertido: %d\n", invertido);
    
    return 0;
}
*/
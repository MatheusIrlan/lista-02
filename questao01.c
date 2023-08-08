//Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.
//O programa deve imprimir 10 caracteres por linha.
#include <stdio.h>
    void converterParaASCII(){
        int cont = 0;
            
            for (int i = 0; i <= 127; i++) {
                
                printf("%3d: '%c' ", i, i );
                cont++;

                if (cont == 10){
                    printf("\n");
                    cont = 0;
                }
            }
        }

    int main() {
        converterParaASCII();

        return 0;
}


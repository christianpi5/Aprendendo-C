#include <stdio.h>
#include <stdlib.h>

int main() {
    int valorOriginal = 10;

    // Copiando o valor
    int copia = valorOriginal;

    // Usando ponteiro
    int* ponteiro = &valorOriginal;

    int *array;
    array = malloc(sizeof(int) * 2);
    array[0] = 10;
    array[1] = 20;

if(array != NULL){
    printf("*memoria alocada = %p\n", &array[1]);

}else{
    printf("Erro");
}

    return 0;
}
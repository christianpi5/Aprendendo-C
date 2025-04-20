#include <stdio.h>
#include <stdlib.h>
#define ARRAY 32


int scan(int * digito){

    printf("\nDigite um numero maior ou igual a 0:");
    scanf("%d", digito);
    int index = 0;
    //aloca um ponteiro para um array
    int *binario = malloc(sizeof(int) * ARRAY );

    //Numeros negativos sai do programa
    if(*digito < 0){
        return 0;
    }
    printf("Decimal(Base 10): %d", *digito);
    
    //Gera a representação de um valor x em binário dentro do array
    do {
        binario[index] = *digito % 2;
        *digito = *digito / 2;
        index++;
    } while (*digito > 0);


    printf("\nBinario(Base 2): ");
    
    //Print de numeros do array de trás para frente 
    for(int j = index - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }
    //Recursão implementada
    scan(digito);
}

int main(){
int digito = 0;

scan(&digito);

return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define VL_INICIAL 0

int scan(int * contador){
    int dado, soma = VL_INICIAL;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &dado);
    
        do{
            *contador = *contador + 1;
            
            if(dado % 2 == 0){
                dado = dado / 2;
            } 

            else if(dado % 2 == 1){

                dado = dado * 3 + 1;
            }

        } while(dado != 1);

}

int main(){
    int contador = VL_INICIAL;
    scan(&contador); //Passa como referencia o endereço de Contador para poder printar a variavel fora da função scan()

    printf("Numero de iteracoes ate alcancar 1: %d", contador);

    return 0;
}
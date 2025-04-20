//Desenvolva um programa em C que permita ao usuário informar um número
//inteiro N > 0. Em seguida, o usuário deverá digitar N números inteiros, que deverão ser
//armazenados em um array. Por fim, o programa deverá ordenar o array em ordem
//crescente e exibi-lo ao usuário. Os números deverão ser exibidos em uma mesma linha,
//com a separação de um espaço entre ele

#include <stdio.h>
#include <stdlib.h>
int input = 0;

//retorna 0 se o numero for igual, positivo se A for maior ou negativo se A for menor
int compara(const void *a, const void *b) {
     // void * aponta pro endereço de memoria sem tipo
    return (*(int*)a - *(int*)b); 
    //type cast de void * para int *
}

int main(){
    printf("Digite um numero maior que Zero\n");
    scanf("%d", &input);

    if(input > 0){
    int numeros[input];
        //define todos os numeros do array
        for(int i = 0; i < input; i = i+ 1){
            printf("Digite o nummero %d: \n", i);
            scanf("%d", &numeros[i] );
        }
    
    //espera parametros = array, tamanho do array, tamanho do tipo e função de comparação
    qsort(numeros, input, sizeof(int), compara);

    //demonstra todos os numeros do array ja ordenado
    for(int i = 0; i < input; i = i+ 1){
        printf("%d ", numeros[i]);
    }



   




    return 0;
}}
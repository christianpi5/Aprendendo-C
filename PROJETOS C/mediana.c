#include <stdio.h>
#include <stdlib.h>
int input = 0;

//retorna 0 se o numero for igual, positivo se A for maior ou negativo se A for menor
int compara(const void *a, const void *b) {
     // void * aponta pro endereço de memoria sem tipo
    return (*(int*)a - *(int*)b); 
    //type cast de void * para int *
}

float mediana(const int array[], const int *tamanho){
if (*tamanho % 2 == 0){
    return ((array[(*tamanho / 2) - 1] + array[*tamanho / 2] )/ 2.0);
} else{
    return array[*tamanho / 2];
}
}

int main(){
    printf("Digite um numero maior que Zero\n");
    scanf("%d", &input);

    if(input > 0){
    int numeros[input];
        //define todos os numeros do array
        for(int i = 0; i < input; i = i+ 1){
            printf("Digite o nummero %d: \n", i+1);
            scanf("%d", &numeros[i] );
        }
    
    //espera parametros = array, tamanho do array, tamanho do tipo e função de comparação
    qsort(numeros, input, sizeof(int), compara);
    float mediana_soma = mediana(numeros, &input);
    printf("A mediana dos valores digitados e: %.2f\n", mediana_soma);


        return 0;
}}
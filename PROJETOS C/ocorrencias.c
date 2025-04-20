#include <stdio.h>
#include <stdlib.h>

//função que retorna ponteiro pro endereço de memória onde está o array
int *get_numeros(int * tamanho){
    int input;

    printf("Digite um numero maior que Zero\n");
    scanf("%d", &input);
    
    //mudando valor de tamanho definido em na função main por ponteiros para uso posterior
    *tamanho = input;

    if(input > 0){
    
    //criando ponteiro para apontar pro endereço onde aloquei espaço em bits reservado na memoria pro array de numeros
    int *numeros = malloc(sizeof(int) * input);

    if (numeros == NULL) { //caso tenha ocorrido erro de alocação de memória
        printf("Erro ao alocar memória\n");
        return NULL;
    }

        //define todos os numeros do array
        for(int i = 0; i < input; i++){
            printf("Digite o nummero %d: \n", i+1);
            scanf("%d", &numeros[i] );
        }

    
    return numeros; //retorna ponteiro pro endereço de memoria do array(não o array em si)
}
}

int main(){

int tamanho;
int* array_numeros = get_numeros(&tamanho);

//contando indices de ocorrencia
for(int j = 0; j < tamanho; j++){
    int primeiro;
    int contador = 0;

    for(int i = j; i < tamanho; i++){
    
    if(contador == 0){
    primeiro = array_numeros[i];
    contador++;
    }
    else if(array_numeros[i] == primeiro){
        contador++;
    }
}

//se o valor da posição atual do array for diferente do valor da posição anterior
if(array_numeros[j] != array_numeros[j - 1]){
    printf("%d: %d Ocorrencias\n",array_numeros[j], contador );
}
contador = 0;
}

free(array_numeros); //boas praticas para liberar memoria onde foi reservada anteriormente para alocar o array
return 0;
}
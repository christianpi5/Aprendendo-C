#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * scan(){
    char *string = malloc(sizeof(char) * 25);

    printf("Escreva uma string para um teste de Palindromo (Max 25 caracteres)");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0'; //DESCARTA a NewLine(nova linha) da string assim que o usuario digite o ENTER, Substituindo pelo \0 que indica final de linha.

    return string;
}


int main(){
    int index = 0;
    int index_invertido = 0;

    char *posicao = scan();
    char *invertido = malloc(sizeof(char) * 25);

    while(posicao[index] != '\0'){
        index++; //Index que ajuda a determinar o tamanho do array de string.
    }

    //Aqui é criado o array invertido utilizando a ultima posição do array normal
    for(int j = index - 1; j >= 0; j--){
        invertido[index_invertido] = posicao[j];
        index_invertido++;
    }

    invertido[index_invertido] = '\0'; //Definindo fim do array invertido


    if(strcmp(posicao, invertido) == 0){
        printf("%s eh palindromo", invertido);
    } else{
        printf("%s nao eh palindromo", posicao);
    }

    return 0;
}
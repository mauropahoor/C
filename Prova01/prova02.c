#include <stdio.h>

int main(){

    int valor;

    /* pega o valor de um numero */
    printf("Digite um valor para checar se ele e positivo ou negativo.\n");
    scanf("%d", &valor);
    /* checa se ele e positivo, negativo ou nulo */
    if(valor > 0){
        printf("O valor digitado e positivo.");
    }
    else if(valor < 0){
        printf("O valor digitado e negativo.");
    }
    else{
        printf("O valor digitado e nulo.");    
    }
}
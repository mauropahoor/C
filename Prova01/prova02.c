#include <stdio.h>

int main(){

    int valor = 0;

    printf("Digite um valor para checar se ele e positivo ou negativo.\n");
    scanf("%d", &valor);
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
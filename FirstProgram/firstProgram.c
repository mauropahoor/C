#include <stdio.h> //Importa as funções de input e output necessarias

int velocidadeMedia(int d, int t){ //Funcao que recebe dois parametros de distancia (d) e tempo (t)
    return d/t; //Retorna a divisao entre os dois
}

int main () { //Funcao main do programa
    char nomeCarro[20]; //String que ira armazenar o nome do carro
    int d; //Int que ira armazenar a distancia
    int t; //Int que ira armazenar o tempo
    int vm; //Int que ira armazenar a velocidade media
    int continuarRodando = 1; //Int que ira decidir se o programa sera repetido ou nao

    while(continuarRodando == 1){ //While para checar se o programa sera repetido (enquanto continuarRodando == 1)
        printf("Digite o nome do carro:\n"); //Print para sinalizar o input que sera coletado
        scanf("%s", &nomeCarro); //Coletar a string nomeCarro
        printf("Digite a distancia percorrida:\n"); //Print para sinalizar o input que sera coletado
        scanf("%d", &d); //Coletar o int d (distancia)
        if(d > 0){ //Verifica se eh uma distancia valida
            printf("Digite em quanto tempo esta distancia foi percorrida:\n"); //Print para sinalizar o input que sera coletado
            scanf("%d", &t); //Coleta o int t (tempo)
            if(t > 0){ //Verifica se eh um tempo valido
                vm = velocidadeMedia(d,t); //Chama a funcao de calcular velocidadeMedia e usa as variaveis d e t como parametro
                printf("O carro %s percorreu a distancia de %d km a uma velocidade media de %d km/h.\n", nomeCarro, d, vm); //Print para sinalizar o input que sera coletado
            }
            else{
                printf("Tempo invalido."); //Print para sinalizar um valor invalido
            }
        }
        else{
            printf("Distancia invalida."); //Print para sinalizar um valor invalido
        }
        printf("Deseja tentar novamente? Digite 1 para sim e 0 para nao.\n"); //Print para sinalizar o input que sera coletado
        scanf("%d", &continuarRodando); //Coleta o int continuarRodando
    }
    return 0; //Finaliza a funcao main
}

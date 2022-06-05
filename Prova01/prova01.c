#include <stdio.h>

int precoPao = 2;
int precoSuco = 4;
int precoAgua = 1;
int saldo = 20;

void comprar(int option){
    /* muda o saldo dependendo do produto escolhido */
    if(option == 1 && saldo >= precoPao){
        saldo -= precoPao;
    }
    else if(option == 2 && saldo >= precoAgua){
        saldo -= precoAgua;
    }
    else if(option == 3 && saldo >= precoSuco){
        saldo -= precoSuco;
    }
    else{
        printf("Saldo insuficiente/Opcao invalida!!\n");
    }
}
void adicionarSaldo(int quant){
    /* adiciona ao saldo a opcao desejada */
    saldo += quant;
}

int main(){
    int option;
    int quant;
    /* cria um loop infinito*/
    while (1 > 0)
    {
        /* pergunta a opcao deseja e a guarda em uma variavel */
        printf("Bem vindo a minha loja!\nVoce possui %d de saldo.\nDigite o que deseja comprar:\n\n1:Pao - R$ 2\n2:Agua - R$ 1\n3:Suco - R$ 4\n4: Adicionar saldo\n", saldo);
        scanf("%d", &option);
        /* chama a funcao dependendo do numero da opcao */
        if(option == 4){
            printf("Deseja adionar quanto ao seu saldo?\n");
            scanf("%d", &quant);
            adicionarSaldo(quant);
        }
        else{
            comprar(option);
        }
    }
}
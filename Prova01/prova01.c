#include <stdio.h>

int precoPao = 2;
int precoSuco = 4;
int precoAgua = 1;
int saldo = 20;

void comprar(int option){
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
    saldo += quant;
}

int main(){
    int option;
    int quant;
    while (1 > 0)
    {
        printf("Bem vindo a minha loja!\nVoce possui %d de saldo.\nDigite o que deseja comprar:\n\n1:Pao - R$ 2\n2:Agua - R$ 1\n3:Suco - R$ 4\n4: Adicionar saldo\n", saldo);
        scanf("%d", &option);
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
#include <stdio.h>

int main() {
    char tipoingresso, nome[100];
    int idade, quantidade;
    float preco;

    printf("Insira seu nome: ");
    scanf("%99s", nome);

    printf("Insira sua idade: ");
    scanf(" %d", &idade);

    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &quantidade);

    while(quantidade <= 0 || quantidade >= 100) {
        printf("Quantidade invalida! Digite novamente: ");
        scanf("%d", &quantidade);
    }

    for(int i = 1; i <= quantidade; i++) {

        printf("\nIngresso %d\n", i);

        printf("Digite o tipo de ingresso (I - Inteira / M - Meia): ");
        scanf(" %c", &tipoingresso);

        if(tipoingresso == 'i' || tipoingresso == 'I') {
            preco = 30;
            printf("Valor do ingresso: R$ %.2f\n", preco);

        } 
        else if(tipoingresso == 'm' || tipoingresso == 'M') {
            preco = 15;
            printf("Valor do ingresso: R$ %.2f\n", preco);

        } 
        else {
            printf("Ingresso invalido\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void somaFibonacci(int qtd);

int main(){
    int qtd = 5; // quantidade de vezes que a soma sera feita

    somaFibonacci(qtd);
}

void somaFibonacci(int qtd){
    int i, soma = 0, aux1 = 0, aux2 = 1;
    for(i = 0; i < qtd - 1; i++){ // loop para fazer a soma, "qtd - 1" diminui um, nesse código começamos com 0
        soma = aux1 + aux2;
        aux1 = aux2;
        aux2 = soma;
    }
    printf("numero inicial: 0\n");
    printf("numero final da sequencia, apos %d passos: %d", qtd, soma);
}

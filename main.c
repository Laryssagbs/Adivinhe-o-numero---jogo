#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, tentativa, tentativas = 0, op;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("Jogo de Adivinhacao\n");
    printf("Tente adivinhar o numero (entre 1 e 100)\n");

    while(1){
        printf("Digite seu palpite: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa > numeroSecreto) {
            printf("\nMuito alto, tente um numero menor.\n");
        } else
            if (tentativa < numeroSecreto) {
            printf("\nMuito baixo, tente um numero maior.\n");
        }

        if(tentativa == numeroSecreto){
            printf("Parabéns, Voce acertou com %d tentativas!\n", tentativas);
            break;
        }

        printf("\nvoce quer desistir? 1 - sim 2 - nao\n");
        scanf("%d", &op);

        if(op == 1){
            printf("Voce desistiu com %d tentativas, o numero secreto eh %d", tentativas, numeroSecreto);
            break;
        }

    }

    return 0;
}

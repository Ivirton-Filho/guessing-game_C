#include <stdio.h>
#include <stdlib.h>
#define NUMERO_CHUTES 10

int main(void){
  printf("************************************\n");
  printf("* Bem vindo ao jogo de adivinhacao *\n");
  printf("************************************\n");

  int numeroSecreto = 42;
  int chute;
  float pontos = 1000;

for (int i = 1; i <=NUMERO_CHUTES; i++) {
  printf("Tentativa %d/%d\n", i, NUMERO_CHUTES);
  printf("Qual e o seu chute: ");
  scanf("%d", &chute);

  if (chute < 0) {
    printf("vOCE NAO PODE CHUTAR NUMEROS NEGATIVOS!\n");
    i--; // decrementa o contador de tentativas
    continue;
  }

  if (chute == numeroSecreto) {
    printf("Parabens, voce acertou o numero secreto :)\n");
    break;
  }else if (chute > numeroSecreto) {
    printf("chute foi errado! Tente novamente!\n");
    printf("Dica: o chute foi maior que o numero secreto!\n");
    pontos = pontos - abs((chute - numeroSecreto) / 2);
  }else {
      printf("chute foi errado! Tente novamente!\n");
      printf("Dica: O chute foi menor que o numero secreto\n");
      pontos = pontos - abs((chute - numeroSecreto) / 2.0);
    }
}

  printf("\nFim de jogo!\n");
  printf("Pontuacao total:%.1f", pontos);
  return 0;
}
#include <stdio.h>

int main(void){
  printf("************************************\n");
  printf("* Bem vindo ao jogo de adivinhacao *\n");
  printf("************************************\n");

  int numeroSecreto = 42;
  int chute;

for (int i = 1; i <=3; i++) {
  printf("Tentativa %d/3\n", i);
  printf("Qual e o seu chute: ");
  scanf("%d", &chute);
  if (chute == numeroSecreto) {
    printf("Parabens, voce acertou o numero secreto :)\n");
    break;
  }else {
    printf("chute foi errado! Tente novamente!\n");
    if (chute > numeroSecreto) {
      printf("Dica: o chute foi maior que o numero secreto!\n");
    }else {
      printf("Dica: O chute foi menor que o numero secreto\n");
    }
}
  }
  printf("\nFim de jogo!");

  return 0;
}
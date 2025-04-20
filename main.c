#include <stdio.h>
#include <stdlib.h> // faz funcionar a funcao abs
#include <time.h> // faz funcionar a função time, reponsavel em gerar um numero aleatorio (contagem de segundos desde 1970)
#define NUMERO_CHUTES 10

int main(void) {

  printf("************************************\n");
  printf("* Bem vindo ao jogo de adivinhacao *\n");
  printf("************************************\n");

  int dificuldade;
  printf("\nEscolha o nivel de dificuldade:\n 1-FACIL\n 2-MEDIO\n 3-DIFICIL\n");
  scanf("%d", &dificuldade);

  // switch case para escolher a dificuldade do jogo
  switch (dificuldade) {

    case 1:
      printf("Dificuldade escolhida: FACIL\n");

    system("pause");

      int segundos = time(0);
      srand(segundos);
      int numeroSecreto = rand() % 50;
      int chute;
      float pontos = 1000; //jogador comeca com 1000 pontos
  //laço de repeticao que faz o codigo repetir as tentativas de chance
      for (int i = 1; i <=NUMERO_CHUTES; i++) {
        printf("Tentativa %d/%d\n", i, NUMERO_CHUTES);
        printf("Qual e o seu chute: ");
        fflush(stdin); // limpar buffer (serve apenas para windows)
        scanf(" %d", &chute);
  //mensagem caso o jogador coloque um numero negativo
        if (chute < 0) {
          printf("vOCE NAO PODE CHUTAR NUMEROS NEGATIVOS!\n");
          i--; // decrementa o contador de tentativas
          continue; //pulatodo o restande de codigo e volta para o laço
        }
  //mensagem caso o jogador acerte o numero ou que apresenta dicas ao jogador
        if (chute == numeroSecreto) {
          printf("Parabens, voce acertou o numero secreto :)\n");
          break;
        }else if (chute > numeroSecreto) {
          printf("chute foi errado! Tente novamente!\n");
          printf("Dica: o chute foi maior que o numero secreto!\n");
          pontos = pontos - abs((chute - numeroSecreto) / 2.0); // sistema que subtrai a quantidade de pontos
        }else {
          printf("chute foi errado! Tente novamente!\n");
          printf("Dica: O chute foi menor que o numero secreto\n");
          pontos = pontos - abs((chute - numeroSecreto) / 2.0); // sistema que subtrai a quantidade de pontos
        }
      }

      printf("\nFim de jogo!\n");
      printf("Pontuacao total:%.1f", pontos);
      break;

    case 2:
      printf("Dificuldade escolhida: MEDIO\n");

    system("pause");

      segundos = time(0);
      srand(segundos);
      numeroSecreto = rand() % 150;
      chute;
      pontos = 1000;//jogador comeca com 1000 pontos
    //laço de repeticao que faz o codigo repetir as tentativas de chance
    for (int i = 1; i <=NUMERO_CHUTES; i++) {
      printf("Tentativa %d/%d\n", i, NUMERO_CHUTES);
      printf("Qual e o seu chute: ");
      fflush(stdin); // limpar buffer (serve apenas para windows)
      scanf(" %d", &chute);
      //mensagem caso o jogador coloque um numero negativo
      if (chute < 0) {
        printf("vOCE NAO PODE CHUTAR NUMEROS NEGATIVOS!\n");
        i--; // decrementa o contador de tentativas
        continue; //pulatodo o restande de codigo e volta para o laço
      }
      //mensagem caso o jogador acerte o numero ou que apresenta dicas ao jogador
      if (chute == numeroSecreto) {
        printf("Parabens, voce acertou o numero secreto :)\n");
        break;
      }else if (chute > numeroSecreto) {
        printf("chute foi errado! Tente novamente!\n");
        printf("Dica: o chute foi maior que o numero secreto!\n");
        pontos = pontos - abs((chute - numeroSecreto) / 2); // sistema que subtrai a quantidade de pontos
      }else {
        printf("chute foi errado! Tente novamente!\n");
        printf("Dica: O chute foi menor que o numero secreto\n");
        pontos = pontos - abs((chute - numeroSecreto) / 2.0); // sistema que subtrai a quantidade de pontos
      }
    }

    printf("\nFim de jogo!\n");
    printf("Pontuacao total:%.1f", pontos);
    break;

    case 3:
      printf("Dificuldade escolhida: DIFICIL\n");

    system("pause");

     segundos = time(0);
    srand(segundos);
     numeroSecreto = rand() % 250;
     chute;
     pontos = 1000; //jogador comeca com 1000 pontos
    //laço de repeticao que faz o codigo repetir as tentativas de chance
    for (int i = 1; i <=NUMERO_CHUTES; i++) {
      printf("Tentativa %d/%d\n", i, NUMERO_CHUTES);
      printf("Qual e o seu chute: ");
      fflush(stdin); // limpar buffer (serve apenas para windows)
      scanf(" %d", &chute);
      //mensagem caso o jogador coloque um numero negativo
      if (chute < 0) {
        printf("vOCE NAO PODE CHUTAR NUMEROS NEGATIVOS!\n");
        i--; // decrementa o contador de tentativas
        continue; //pulatodo o restande de codigo e volta para o laço
      }
      //mensagem caso o jogador acerte o numero ou que apresenta dicas ao jogador
      if (chute == numeroSecreto) {
        printf("Parabens, voce acertou o numero secreto :)\n");
        break;
      }else if (chute > numeroSecreto) {
        printf("chute foi errado! Tente novamente!\n");
        printf("Dica: o chute foi maior que o numero secreto!\n");
        pontos = pontos - abs((chute - numeroSecreto) / 2.0); // sistema que subtrai a quantidade de pontos
      }else {
        printf("chute foi errado! Tente novamente!\n");
        printf("Dica: O chute foi menor que o numero secreto\n");
        pontos = pontos - abs((chute - numeroSecreto) / 2.0); // sistema que subtrai a quantidade de pontos
      }
    }

    printf("\nFim de jogo!\n");
    printf("Pontuacao total:%.1f", pontos);
    break;
  }
  return 0;
}

#include "../opcoes.h"

void saldo() {
  system("clear");
  int i, saldos[4] = {100, 2, 20, 15};
  char *qtd_moedas[4] = {"Real", "Bitcoin", "Etherium", "Ripple"};
  setlocale(LC_ALL, "");
  printf("-----------------------\nesses são seus saldos em respectivas "
         "moedas\n-----------------------\n");
  for (i = 0; i < sizeof(saldos) / sizeof(saldos[0]); i++) {
    printf("saldo em %s: %d\n\n", qtd_moedas[i], saldos[i]);
  }

  sleep(5);
}

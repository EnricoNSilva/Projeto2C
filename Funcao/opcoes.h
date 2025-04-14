#ifndef opcoes
#define opcoes

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>
void comprarCripto();
void saldo();
void venderCripto(char *usuario);
char **importarInfo(char *usuarioProcurado);
int editaArquivo(char *identificadorUsuario, char *campo, float novoValor);
void saque(char *usuario);
int verificarSenha(char *usuario, char *senha);
int alternativa(int num, char *cpf);
void registrarTransacao(const char *cpf, const char *operacao, float valor, const char *detalhes);
void consultarExtrato(const char *cpf);
// char* testesC(int g);

#endif
#include <stdio.h>

int main(){

char nome[81];

printf("Digite seu nome: ");
gets(nome);

printf("-> %s",nome);
//puts("puts() pula linha sozinha");
//puts(&nome[4]);
return 0;
}

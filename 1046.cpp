#include <stdio.h>
#include <stdlib.h>

main(){
int entrada, saida;

scanf("%i %i", &entrada, &saida);

if(entrada==0){
    entrada=24;
}
if(saida==0){
    saida=24;
}

if(entrada == saida){
    printf("O JOGO DUROU 24 HORA(S)\n");
}else if(saida < entrada){
    printf("O JOGO DUROU %i HORA(S)\n", ((saida+24)-entrada));
}else{
    printf("O JOGO DUROU %i HORA(S)\n", (saida-entrada));
}

}

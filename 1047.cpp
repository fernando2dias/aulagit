#include <stdio.h>
#include <stdlib.h>

main(){
int entrada, saida, minEnt, minSai;
fflush(stdin);
scanf("%i %i %i %i", &entrada, &minEnt, &saida, &minSai);

if(entrada==0){
    entrada=24;
}
if(saida==0){
    saida=24;
}
if(entrada==saida && minSai == minEnt){
    printf("O JOGO DUROU 24 HORA(S)");
}
else if(entrada == saida && minSai > minEnt){
    printf("O JOGO DUROU 0 HORA(S)");
}else if(entrada == saida && minSai < minEnt){
    printf("O JOGO DUROU 23 HORA(S)");
}else if(saida < entrada){
    printf("O JOGO DUROU %i HORA(S)", ((saida+24)-entrada));
}
else if(saida > entrada && minSai < minEnt){
    printf("O JOGO DUROU %i HORA(S)", ((saida-1)-entrada));
}
else{
    printf("O JOGO DUROU %i HORA(S)", (saida-entrada));
}


if(minSai < minEnt){
    printf(" E %i MINUTO(S)\n", ((minSai+60)-minEnt));
}else{
    printf(" E %i MINUTO(S)\n", (minSai-minEnt));
}


}

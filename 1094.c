#include <stdio.h>

int main (){
int total=0, testes=0, coelhos=0, ratos=0, sapos=0, qtd, i;
char tipo;
scanf("%i", &testes);

for(i=0; i<testes; i++){
    scanf("%i %c", &qtd, &tipo);

    if(tipo == 'C' || tipo == 'c'){
        coelhos += qtd;
        total += qtd;
    }

    if(tipo == 'R' || tipo == 'r'){
        ratos += qtd;
        total += qtd;
    }

    if(tipo == 'S' || tipo == 's'){
        sapos += qtd;
        total += qtd;
    }

}


printf("Total: %i cobaias\n", total);
printf("Total de coelhos: %i\n", coelhos);
printf("Total de ratos: %i\n", ratos);
printf("Total de sapos: %i\n", sapos);
printf("Percentual de coelhos: %.2f %%\n", (float)(coelhos*100)/total);
printf("Percentual de ratos: %.2f %%\n", (float)(ratos*100)/total);
printf("Percentual de sapos: %.2f %%\n", (float)(sapos*100)/total);

}

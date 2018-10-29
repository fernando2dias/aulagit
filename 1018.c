#include <stdio.h>

int main(){
int notaCem=0, notaCinq=0, notaVinte=0, notaDez=0, notaCinco=0, notaDois=0, notaUm=0, dinheiro=0, troco=0;
scanf("%i", &dinheiro);
troco = dinheiro;


while(troco>0){
if(troco >= 100){
    notaCem = troco/100;
    troco = troco%100;
}

else if(troco >= 50){
    notaCinq = troco/50;
    troco = troco%50;
}
else if(troco >= 20){
    notaVinte = troco/20;
    troco = troco%20;

}
else if(troco >=10){
    notaDez = troco/10;
    troco = troco%10;
}
else if(troco >=5){
    notaCinco = troco/5;
    troco = troco%5;

}
else if(troco >=2){
    notaDois = troco/2;
    troco = troco%2;
}
else if(troco>=1){
    notaUm = troco/1;
    troco= troco%1;
}

}

printf("%i\n", dinheiro);
printf("%i nota(s) de R$ 100,00\n", notaCem);
printf("%i nota(s) de R$ 50,00\n", notaCinq);
printf("%i nota(s) de R$ 20,00\n", notaVinte);
printf("%i nota(s) de R$ 10,00\n", notaDez);
printf("%i nota(s) de R$ 5,00\n", notaCinco);
printf("%i nota(s) de R$ 2,00\n", notaDois);
printf("%i nota(s) de R$ 1,00\n", notaUm);
return 0;
}

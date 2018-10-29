#include <stdio.h>

int main(){
float notaCem=0.0, notaCinq=0.0, notaVinte=0.0, notaDez=0.0, notaCinco=0.0, notaDois=0.0, moedaUm=0.0, moedaCinq=0.0, moedaVintCinc=0.0, moedaDez=0.0, moedaCinc=0.0, moedaUmC=0.0, dinheiro=0.0, troco=0.0;
scanf("%f", &dinheiro);
troco = dinheiro;



if(troco >= 100.0){
    notaCem = troco/100.0;

    troco -=(notaCem*100.0);

    printf("troco>>> %.0f \n", troco);
}
/*
else if(troco >= 50.0){
    notaCinq = troco/50.0;
    troco = troco-notaCinq;
}
else if(troco >= 20.0){
    notaVinte = troco/20.0;
    troco = troco-notaVinte;

}
else if(troco >=10.0){
    notaDez = troco/10.0;
    troco = troco-notaDez;
}
else if(troco >=5.0){
    notaCinco = troco/5.0;
    troco = troco-notaCinco;

}
else if(troco >=2.0){
    notaDois = troco/2.0;
    troco = troco-notaDois;
}
else if(troco>=1.0){
    moedaUm = troco/1;
    troco= troco-moedaUm;
}
else if(troco>=0.50){
    moedaCinq = troco/0.50;
    troco=troco-moedaCinq;
}
else if(troco>=0.25){
    moedaVintCinc = troco/0.25;
    troco=troco-moedaVintCinc;
}
else if(troco>=0.10){
    moedaDez = troco/0.10;
    troco=troco-moedaDez;
}
else if(troco>=0.5){
    moedaCinc = troco/0.05;
    troco=troco-moedaCinc;
}
else if(troco>=0.01){
    moedaUmC = troco/0.01;
    troco=0.0;
}
*/



printf("NOTAS:\n");
printf("%.0f nota(s) de R$ 100,00\n", notaCem);
/*

printf("%.0f nota(s) de R$ 50,00\n", notaCinq);
printf("%.0f nota(s) de R$ 20,00\n", notaVinte);
printf("%.0f nota(s) de R$ 10,00\n", notaDez);
printf("%.0f nota(s) de R$ 5,00\n", notaCinco);
printf("%.0f nota(s) de R$ 2,00\n", notaDois);

printf("MOEDAS:\n");
printf("%.0f moedas(s) de R$ 1,00\n", moedaUm);
printf("%.0f moedas(s) de R$ 0,50\n", moedaCinq);
printf("%.0f moedas(s) de R$ 0,25\n", moedaVintCinc);
printf("%.0f moedas(s) de R$ 0,10\n", moedaDez);
printf("%.0f moedas(s) de R$ 0,05\n", moedaCinc);
printf("%.0f moedas(s) de R$ 0,01\n", moedaUmC);

*/

return 0;

}

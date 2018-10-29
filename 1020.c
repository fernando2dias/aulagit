#include <stdio.h>

int main(){
    int entrada=0, ano=0, mes=0, dia=0;
    scanf("%i", &entrada);

    while(entrada>0){
        if(entrada>=365){
            ano = entrada/365;
            entrada = entrada%365;
        }
        else if(entrada>=30){
            mes = entrada/30;
            entrada = entrada%30;
        }
        else if(entrada>=1){
            dia = entrada;
            entrada=0;
        }
    }

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
   printf("%i dia(s)\n", dia);

return 0;
}

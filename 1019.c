#include <stdio.h>

int main(){
    int horas=0, minutos=0, segundos=0, entrada=0;

    scanf("%i", &entrada);

    while(entrada>0){
        if(entrada >= 3600){
            horas = entrada / 3600;
            entrada = entrada%3600;
        }
        else if(entrada >= 60){
            minutos = entrada/60;
            entrada = entrada%60;
        }
        else {
            segundos = entrada;
            entrada = 0;
        }
    }
    printf("%i:%i:%i\n", horas, minutos, segundos);

return 0;
}

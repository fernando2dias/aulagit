#include <stdio.h>

int main(){
float velMedia, litros,tempo;


scanf("%f", &tempo);
scanf("%f", &velMedia);

litros = (tempo*velMedia)/12;

printf("%.3f\n", litros);

return 0;
}

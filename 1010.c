#include <stdio.h>

int main(){

int codPeca, qtdPeca, codPeca2, qtdPeca2;
double valorPeca, valorPeca2, totalPagar;

scanf("%d %d %lf",&codPeca,&qtdPeca,&valorPeca);
scanf("%d %d %lf",&codPeca2,&qtdPeca2,&valorPeca2);

totalPagar = ((qtdPeca * valorPeca)+(qtdPeca2 * valorPeca2));
printf("VALOR A PAGAR: R$ %.2lf\n",totalPagar);

return 0;
}

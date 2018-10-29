#include <stdio.h>

int main(){

double salario,bonus,total;
char name;
scanf("%s %lf %lf",&name,&salario,&bonus);

total = salario+bonus*.15;
printf("TOTAL = R$ %.2lf\n",total);

return 0;
}

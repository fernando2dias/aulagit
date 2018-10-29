#include <stdio.h>

int main(){
    int NumFunc, HorasTrabalhadas;
    float ValorPorHora, Salario;
    scanf("%d", &NumFunc);
    scanf("%d", &HorasTrabalhadas);
    scanf("%f", &ValorPorHora);

    Salario = HorasTrabalhadas * ValorPorHora;

    printf("NUMBER = %d\n", NumFunc);
    printf("SALARY = U$ %.2f\n", Salario);

return 0;
}


#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(){

double A,B,C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

scanf("%lf %lf %lf", &A, &B, &C);

TRIANGULO = (A*C)/2; // Para calcular area de um triangulo retangulo é calcular a base * altura dividido por 2
CIRCULO =  PI * (pow(C,2)); // Para calcular a area de um circulo basta fazer o valor de PI*raio²
TRAPEZIO = ((A+B)*C)/2; // Calcular bases * altura
QUADRADO = B*B;
RETANGULO = A*B;

printf("TRIANGULO: %.3lf\n", TRIANGULO);
printf("CIRCULO: %.3lf\n", CIRCULO);
printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
printf("QUADRADO: %.3lf\n", QUADRADO);
printf("RETANGULO: %.3lf\n", RETANGULO);

return 0;
}

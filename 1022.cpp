#include <bits/stdc++.h>
using namespace std;

void resolve(int num1, int div1, char operador, int num2, int div2);
int mdc(int a,int b);

int main(){
int n1, n2, div1, div2;
char op, espaco;
string resultado;

cin >> n1 >> espaco >> div1 >> op >> n2 >> espaco >> div2;
resolve(n1, div1, op, n2, div2);


return 0;
}

void resolve(int num1, int div1, char operador, int num2, int div2){
int numero1, numero2, divisor1, divisor2;
if(operador == '+'){
    numero1 = num1*div2+num2*div1;
    divisor1 = div1*div2;
    cout << numero1 << '/' << divisor1;


    cout << cout << numero1 << '/' << divisor1 << endl;
}

}

int mdc(int a,int b)
{
    if(b == 0) return a;
    else
    return mdc(b,a%b);
}

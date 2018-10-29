#include <bits/stdc++.h>

using namespace std;

int main(){
cout << fixed << setprecision(2);
float salario,aux,aux2,dif;

cin >> salario;


if(salario > 4500.00){
    aux = 1000.00*0.08;
    aux2 = 1500.01*0.18;
    dif = (salario - 4500.01)*0.28;
    cout << "R$ " << (aux+aux2+dif) << endl;
}

if(salario > 3000.01 && salario <= 4500.00){
    aux = 1000.00*0.08;
    dif = (salario - 3000.00)*0.18;

    cout << "R$ " << (aux + dif) << endl;
}

if(salario > 2000.01 && salario <= 3000.00){
        dif = (salario - 2000.00)*0.08;
    cout << "R$ " << (dif) << endl;
}

if(salario > 0.00 && salario <= 2000.00){
    cout << "Isento" << endl;
}

return 0;
}


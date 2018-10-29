#include <bits/stdc++.h>

using namespace std;

int main(){
cout << fixed << setprecision(2);
float salario;

cin >> salario;

if(salario > 2000.00){
    cout << "Novo salario: " << salario + (salario*0.04) << endl;
    cout << "Reajuste ganho: " << (salario*0.04) << endl;
    cout << "Em percentual: 4 %" << endl;
}

if(salario > 1200.01 && salario <= 2000.00){
    cout << "Novo salario: " << salario + (salario*0.07) << endl;
    cout << "Reajuste ganho: " << (salario*0.07) << endl;
    cout << "Em percentual: 7 %" << endl;
}


if(salario > 800.01 && salario <= 1200.00){
    cout << "Novo salario: " << salario + (salario*0.10) << endl;
    cout << "Reajuste ganho: " << (salario*0.10) << endl;
    cout << "Em percentual: 10 %" << endl;
}

if(salario > 400.01 && salario <= 800.00){
    cout << "Novo salario: " << salario + (salario*0.12) << endl;
    cout << "Reajuste ganho: " << (salario*0.12) << endl;
    cout << "Em percentual: 12 %" << endl;
}

if(salario > 0.00 && salario <= 400.00){
    cout << "Novo salario: " << salario + (salario*0.15) << endl;
    cout << "Reajuste ganho: " << (salario*0.15) << endl;
    cout << "Em percentual: 15 %" << endl;
}

return 0;
}

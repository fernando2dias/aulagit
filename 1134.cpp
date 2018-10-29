#include <bits/stdc++.h>
using namespace std;

int main(){
int alcool=0, gasolina=0, diesel=0, combustivel;


while(cin >> combustivel && combustivel != 4){
    while(combustivel < 0 && combustivel > 4){
        cin >> combustivel;
    }

    if(combustivel == 1){
        alcool++;
    }

    if(combustivel == 2){
        gasolina++;
    }
    if(combustivel == 3){
        diesel++;
    }
}

cout << "MUITO OBRIGADO" << endl;
cout << "Alcool: " << alcool << endl;
cout << "Gasolina: " << gasolina << endl;
cout << "Diesel: " << diesel << endl;


return 0;
}

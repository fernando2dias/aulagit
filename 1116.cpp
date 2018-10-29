#include <bits/stdc++.h>

using namespace std;

int main(){
int i, testes;

cin >> testes;

int numero[testes], divisor[testes];
cout << fixed << setprecision(1);
for(i=0; i<testes;i++){
    cin >> numero[i] >> divisor[i];
    if(divisor[i] != 0){
        cout << (float)numero[i]/divisor[i] << endl;
    }else{
        cout << "divisao impossivel" << endl;
    }
}

}

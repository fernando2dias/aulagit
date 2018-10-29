#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int numero;
    char binario[100000];

    while(cin >> numero && numero !=0){
    itoa(numero,binario,32);
    cout << binario << endl;
    }
    cout << "0" << endl;

return 0;
}

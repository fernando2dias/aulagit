#include <bits/stdc++.h>

int main(){
int cont=0, i, numero[5];

using namespace std;

for(i=0; i<5; i++){
    cin >> numero[i];
    if(numero[i]%2 == 0){
        cont++;
    }
}

cout << cont << " valores pares" << endl;

return 0;
}

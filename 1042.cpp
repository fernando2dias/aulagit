#include <bits/stdc++.h>

using namespace std;

int main(){
vector<int> numero(3);
vector<int> ordenado(3);
int i;

cin >> numero[0] >> numero[1] >> numero[2];

for(i=0; i<3; i++){
    ordenado[i] = numero[i];
}

sort(ordenado.begin(), ordenado.end());



for(i=0; i<3; i++){
    cout << ordenado[i] << endl;
}

cout << endl;

for(i=0; i<3; i++){
    cout << numero[i] << endl;
}

return 0;
}

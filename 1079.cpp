#include <bits/stdc++.h>

using namespace std;

int main(){
int x, i, j;
float numeros[3];
cin >> x;
float num[x];

cout << fixed << setprecision(1);
for(i=0; i<x; i++){
    cin >> numeros[0] >> numeros[1] >> numeros[2];
    num[i] = ((numeros[0]*0.2) + (numeros[1]*0.3) + (numeros[2]*0.5));
}

for(i=0; i<x; i++){
    cout << num[i] << endl;
}


return 0;
}


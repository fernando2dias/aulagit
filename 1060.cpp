#include <bits/stdc++.h>
using namespace std;

int main(){
int i, positivos=0;
vector<float> numero(6);

for(i=0; i<6; i++){
    cin >> numero[i];
    if(numero[i] > 0.0){
        positivos++;
    }
}

cout << positivos << " valores positivos" << endl;


return 0;
}

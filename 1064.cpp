#include <bits/stdc++.h>
using namespace std;

int main(){
int i, positivos=0;
vector<float> numero(6);
float media=0.0;

for(i=0; i<6; i++){
    cin >> numero[i];
    if(numero[i] > 0.0){
        positivos++;
        media += numero[i];
    }
}
cout << setprecision(2);
cout << positivos << " valores positivos" << endl;
cout << (media/positivos) << endl;

return 0;
}


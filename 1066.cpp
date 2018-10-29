#include <bits/stdc++.h>

int main(){
int par=0, impar=0, positivo=0, negativo=0, i, numero[5];

using namespace std;

for(i=0; i<5; i++){
    cin >> numero[i];
    if(numero[i]%2 == 0){
        par++;
    }else{
        impar++;
    }


    if(numero[i]<0){
        negativo++;
    }else if(numero[i]>0){
        positivo++;
    }


}

cout << par << " valor(es) par(es)" << endl;
cout << impar << " valor(es) impar(es)" << endl;
cout << positivo << " valor(es) positivo(s)" << endl;
cout << negativo << " valor(es) negativo(s)" << endl;

return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
int x, i, maior=0, maiorPos;

for(i=1; i<=100; i++){
    cin >> x;
    if (x >= maior){
        maior = x;
        maiorPos = i;
    }
}

cout << maior << endl << maiorPos << endl;

return 0;
}


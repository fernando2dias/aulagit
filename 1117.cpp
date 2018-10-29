#include <bits/stdc++.h>

using namespace std;

int main(){

float nota01, nota02;

cout << fixed << setprecision(2);
while (cin >> nota01 && (nota01 < 0.00 || nota01 > 10.00)){
    cout << "nota invalida" << endl;
}
while (cin >> nota02 && (nota02 < 0.00 || nota02 > 10.00)){
    cout << "nota invalida" << endl;
}

cout << "media = " << (nota01+nota02)/2.0 << endl;

return 0;
}

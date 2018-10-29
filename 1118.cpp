#include <bits/stdc++.h>

using namespace std;

int main(){
int continua=1;
float nota01, nota02, media;

do{
cout << fixed << setprecision(2);


while (cin >> nota01 && (nota01 < 0.00 || nota01 > 10.00)){
    cout << "nota invalida" << endl;
}
while (cin >> nota02 && (nota02 < 0.00 || nota02 > 10.00)){
    cout << "nota invalida" << endl;
}

cout << "media = " << (nota01+nota02)/2.0 << endl;
cout << "novo calculo (1-sim 2-nao)" << endl;

while(cin >> continua && (continua<1 || continua > 2)){
cout << "novo calculo (1-sim 2-nao)" << endl;
}

}while(continua == 1);



return 0;
}


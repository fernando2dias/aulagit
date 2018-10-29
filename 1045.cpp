#include <bits/stdc++.h>

using namespace std;

int main(){
double a,b,c;

cin >> a >> b >> c;

if(a >= b+c){
    cout << "NAO FORMA TRIANGULO" << endl;
}

if((a*a)== (b*b)+(c*c)){
    cout << "TRIANGULO RETANGULO" << endl;
}

if((a*a)> (b*b)+(c*c)){
    cout << "TRIANGULO OBTUSANGULO" << endl;
}

if((a*a)< (b*b)+(c*c)){
    cout << "TRIANGULO ACUTANGULO" << endl;
}

if(a==b==c){
    cout << "TRIANGULO EQUILATERO" << endl;
}

if((a==b && c!=a)||(c==b && a!=b)||(a==c && b!=a)){
    cout << "TRIANGULO ISOSCELES" << endl;
}


return 0;
}


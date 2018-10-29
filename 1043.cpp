#include <bits/stdc++.h>

using namespace std;

int main(){
float a,b,c;
bool triangulo;

cin >> a >> b >> c;
triangulo = ((a+b>c)&&(a+c>b)&&(b+c>a));
cout << fixed << setprecision(1);
if(triangulo == true){
    cout << "Perimetro = " << (a+b+c) << endl;
}else{
    cout << "Area = " << (((a+b)/2)*c) << endl;
}

return 0;
}

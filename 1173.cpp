#include <bits/stdc++.h>
using namespace std;
void recursivo(int num);
int main(){
int N[10];
int numero;
//cout << fixed << setprecision(1);
cin >> numero;
recursivo(numero);

return 0;
}
void recursivo(int num){
    int i;
    cout << num << endl;
    for(i)
    if(i<10){
        cout << "N[" << i << "] = " << num*2 << endl;
        i++;
        //recursivo(num*2);
    }

}


#include <bits/stdc++.h>

using namespace std;
int main(){
int n1, n2, maior, menor;

cin >> n1 >> n2;

maior = ((n1+n2+abs(n1-n2))/2);
if(maior == n1){
    menor = n2;
}else{
    menor = n1;
}

if(maior%menor == 0){
    cout << "Sao Multiplos" << endl;
}else{
    cout << "Nao sao Multiplos" << endl;
}

return 0;
}

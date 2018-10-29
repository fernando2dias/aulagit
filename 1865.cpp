#include <bits/stdc++.h>

using namespace std;
int main(){
int n;
cin >> n;
int x[n], *p_x=x, i, menor, posMenor;
string nome[n], *p_nome=nome;

for(i=0; i<n; i++, p_x++){
    cin >> *p_nome >> *p_x;
    if(*p_nome=="Thor" || *p_nome=="thor"){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
}

return 0;
}


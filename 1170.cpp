#include <bits/stdc++.h>

using namespace std;

int comida (float c, int dia);


int main(){
int i,N, dia;
float C;

cin >> N;
for(i=0; i<N; i++){
    cin >> C;

    dia = comida(C,0);
    cout << dia << " dias" << endl;
}
return 0;
}


int comida (float c, int dia){

    if(c >1.0){
        c /= 2;
        dia++;
        comida(c, dia);
    }else{
        return dia;
    }

}


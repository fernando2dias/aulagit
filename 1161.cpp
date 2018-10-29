#include <bits/stdc++.h>

using namespace std;

int main(){
long long int M=0, N=0,fatorM=0, fatorN=0, Resultado=0;
int i, j;
while(cin >> M >> N && M<=20 &&N<=20){
        fatorM = M;
        fatorN = N;
    for(i=M-1; i>0; i--){
        fatorM = fatorM*i;
    }
    for(j=N-1; j>0; j--){
        fatorN = fatorN*j;
    }
    if(M ==0){
        fatorM = 1;
    }
    if(N==0){
        fatorN = 1;
    }

    Resultado = fatorM + fatorN;
    cout << Resultado << endl;

}

return 0;
}

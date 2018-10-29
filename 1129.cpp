#include <bits/stdc++.h>

using namespace std;

int main(){
int N, i, alternativa[5];

do{
do{
cin >> N;
    for(i=0; i<N; i++){
        cin >> alternativa[0] >> alternativa[1] >> alternativa[2] >> alternativa[3] >> alternativa[4];

            if((alternativa[0]>=0 & alternativa[0]<=127) & (alternativa[1]>127 & alternativa[1]<=255) & (alternativa[2]>127 & alternativa[2]<=255) & (alternativa[3]>127 & alternativa[3]<=255) & (alternativa[4]>127 & alternativa[4]<=255)){
                cout << "A" << endl;
            }
            else if((alternativa[0]>127 & alternativa[0]<=255) & (alternativa[1]>=0 & alternativa[1]<=127) & (alternativa[2]>127 & alternativa[2]<=255) & (alternativa[3]>127 & alternativa[3]<=255) & (alternativa[4]>127 & alternativa[4]<=255)){
                cout << "B" << endl;
            }
            else if((alternativa[0]>127 & alternativa[0]<=255) & (alternativa[1]>127 & alternativa[1]<=255) & (alternativa[2]>=0 & alternativa[2]<=127) & (alternativa[3]>127 & alternativa[3]<=255) & (alternativa[4]>127 & alternativa[4]<=255)){
                cout << "C" << endl;
            }
            else if((alternativa[0]>127 & alternativa[0]<=255) & (alternativa[1]>127 & alternativa[1]<=255) & (alternativa[2]>127 & alternativa[2]<=255) & (alternativa[3]>=0 & alternativa[3]<=127) & (alternativa[4]>127 & alternativa[4]<=255)){
                cout << "D" << endl;
            }
            else if((alternativa[0]>127 & alternativa[0]<=255) & (alternativa[1]>127 & alternativa[1]<=255) & (alternativa[2]>127 & alternativa[2]<=255) & (alternativa[3]>127 & alternativa[3]<=255) & (alternativa[4]>=0 & alternativa[4]<=127)){
                cout << "E" << endl;
            }else{
                cout << "*" << endl;
            }
        }
    }while(N!=0);
}while(1 < N > 255);

return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
int H1, H2, M1, M2,inicio, fim;
//(0≤H1≤23, 0≤M1≤59, 0≤H2≤23, 0≤M2 ≤59)
while(cin >> H1 >> M1 >> H2 >> M2 && (H1>=0 && H1<=23 && H2>=0 && H2<=23 && M1>=0 && M1 <=59 && M2>=0 && M2 <=59)){

if(H1==0 && H2==0 && M1==0 && M2==0){
    break;
}

if(H1 == 0){
    H1 = 24;
}
if(H2 == 0){
    H2 = 24;
}

if(H1>H2){
    H2+=24;
}

if(H1==H2 && M2<M1){
    H2+=24;
}

H1 = H1*60;
H2 = H2*60;

inicio = H1+M1;
fim = H2+M2;

cout << (fim-inicio) << endl;

}

return 0;
}

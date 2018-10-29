#include <bits/stdc++.h>

using namespace std;

int main(){
int N, i, j, pum=0;

cin >> N;

for(i=0; i<N; i++){
    for(j=0; j<4; j++){
        pum++;
        if(j==3){
            cout << "PUM" << endl;
        }else{
            cout << pum << " ";
        }
    }
}

return 0;
}

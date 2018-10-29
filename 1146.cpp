#include <bits/stdc++.h>

int main(){
int x, i;
using namespace std;

while(cin >> x && x > 0){
    for(i=1; i<=x; i++){
        if(i!=x){
            cout << i << " ";
        }else{
        cout << i;
        }
    }
    cout << endl;
}
return 0;
}


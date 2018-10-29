#include <bits/stdc++.h>

int main(){
int x, i;

using namespace std;

cin >> x;

for(i=0; i<6; i++){
        if(x%2 ==0){
            x++;
            cout << x << endl;
        }else{
            x+=2;
            cout << x << endl;
        }
}

return 0;
}



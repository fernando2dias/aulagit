#include <bits/stdc++.h>
using namespace std;

int main(){
int x1,x2,y1,y2,dama;

cin >> x1 >> y1 >> x2 >> y2;

while(x1!=0 & y1!=0 & x2!=0 & y2!=0){
    if(x1==x2 & y1==y2){
        dama = 0;
    }else if(x1==x2 | y1==y2 | abs(x2-x1) == abs(y2-y1)){
        dama = 1;
    }else{
        dama = 2;
    }
    cout << dama << endl;
    cin >> x1 >> y1 >> x2 >> y2;
}
return 0;
}

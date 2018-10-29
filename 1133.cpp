#include <bits/stdc++.h>
using namespace std;

int main(){
int x,y,maior,menor,i;

cin >> x >> y;
maior = ((x + y)+abs(x-y))/2;

if(maior == x){
    menor=y;
}else{
    menor=x;
}

for(i=menor+1;i<maior;i++){
    if(i%5 == 2 || i%5 == 3){
        cout << i << endl;
    }
}



return 0;
}

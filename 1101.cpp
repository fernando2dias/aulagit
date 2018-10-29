#include <bits/stdc++.h>
using namespace std;

int main(){
int x,y,maior,menor,i, soma;

while(cin >> x >> y){
if(x<=0 || y<=0){break;}
maior = ((x + y)+abs(x-y))/2;
soma =0;
if(maior == x){
    menor=y;
}else{
    menor=x;
}

for(i=menor;i<=maior;i++){
    cout << i << " ";
    soma += i;
}
cout << "Sum=" << soma << endl;

}

return 0;
}

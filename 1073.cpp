#include <bits/stdc++.h>

using namespace std;
int main(){
int n, i;

do{
cin >> n;
}while(n<=5 || n>=2000);

for(i=2; i<=n; i+=2){
    cout << i << "^2 = " << (int)pow(i,2) << endl;
}

return 0;
}

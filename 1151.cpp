#include <bits/stdc++.h>

using namespace std;

int main(){
int n,i;
cin >> n;
int fibonacci[n];

for(i=0; i<n; i++){
    if(i == 0 || i ==1){
        fibonacci[i]=i;
    }else{
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }
}

for(i=0; i<n; i++){
    if(i==n-1){
        cout << fibonacci[i];
    }
    else{
        cout << fibonacci[i] << " ";
    }
}
cout << endl;


return 0;
}




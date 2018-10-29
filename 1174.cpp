#include <bits/stdc++.h>
using namespace std;

int main(){
float A[100];
int i;
cout << fixed << setprecision(1);

for(i=0; i<100; i++){
    cin >> A[i];
    if(A[i]<=10.0){
        cout << "A[" << i << "] = " << A[i] << endl;
    }
}

return 0;
}


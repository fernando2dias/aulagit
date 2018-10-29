#include <bits/stdc++.h>

int main(){
float idade, idadeTotal=0.0;
int pessoas=0;
using namespace std;
while(cin >> idade && idade> 0){
    pessoas++;
    idadeTotal = idadeTotal+idade;
}
cout << fixed << setprecision(2);
cout << idadeTotal/pessoas << endl;

return 0;
}

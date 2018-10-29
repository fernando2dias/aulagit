#include <bits/stdc++.h>

using namespace std;

int main(){
int i;
float s=1.0;

for(i=2; i<=100; i++){
    s = s+(1/(float)i);
}
//s=s+1;
cout << fixed << setprecision(2);
cout << s << endl;

return 0;
}

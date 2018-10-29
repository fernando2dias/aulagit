#include <bits/stdc++.h>

using namespace std;

int main(){
int n, i, j;
string v;

while(cin >> n){
    for(i=0; i<n; i++){
        int leds =0;
        cin >> v;
        for(j=0; j<(int)v.length(); j++){
            if(v[j] == '0'){
                leds += 6;
            }
            if(v[j] == '1'){
                leds += 2;
            }
            if(v[j] == '2'){
                leds += 5;
            }
            if(v[j] == '3'){
                leds += 5;
            }
            if(v[j] == '4'){
                leds += 4;
            }
            if(v[j] == '5'){
                leds += 5;
            }
            if(v[j] == '6'){
                leds += 6;
            }
            if(v[j] == '7'){
                leds += 3;
            }
            if(v[j] == '8'){
                leds += 7;
            }
            if(v[j] == '9'){
                leds += 6;
            }

        }
        cout << leds << " leds" << endl;
    }
}

return 0;
}

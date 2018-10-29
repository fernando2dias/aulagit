#include <bits/stdc++.h>
using namespace std;
int main(){
string numero;

int i,k, num[i];

for(i=0; i<3; i++){
        num[i]=0;
    for(k=0; k<4; k++){
        fflush(stdin);
        getline(cin, numero);
        //cin >> numero;
        if(numero == "--*"){
            num[i]+=1;
        }
        else if(numero == "-*-"){
            num[i]+=2;
        }
        else if(numero == "-**"){
            num[i]+=3;
        }
        else if(numero == "*--"){
            num[i]+=4;
        }
        else if(numero == "*-*"){
            num[i]+=5;
        }
        else if(numero == "**-"){
            num[i]+=6;
        }
        else if(numero == "***"){
            num[i]+=7;
        }
        else if(numero == "caw caw"){
        num[i]+=0;
           break;
        }
    }
}

for(i=0; i<3; i++){
        cout << num[i] << endl;
}
return 0;
}



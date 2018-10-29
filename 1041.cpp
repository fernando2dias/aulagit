#include <bits/stdc++.h>
using namespace std;
int main(){
    float X, Y;
    float *p_X=&X, *p_Y=&Y;
    cin >> *p_X >> *p_Y;

    if(*p_X > 0 && *p_Y > 0){
        cout << "Q1" << endl;
    }
    else if(*p_X < 0 && *p_Y > 0){
        cout << "Q2" << endl;
    }
    else if(*p_X < 0 && *p_Y < 0){
        cout << "Q3" << endl;
    }
    else if(*p_X > 0 && *p_Y < 0){
        cout << "Q4" << endl;
    }

    else if(*p_X == 0 && *p_Y !=0){
        cout << "Eixo Y" << endl;
    }
    else if(*p_Y == 0 && *p_X !=0){
        cout << "Eixo X" << endl;
    }
    else if(*p_X == 0 && *p_Y ==0){
        cout << "Origem" << endl;
    }

return 0;
}

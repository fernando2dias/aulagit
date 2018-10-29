#include <bits/stdc++.h>


using namespace std;

int main(){
int x, i;
string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

do{
cin >> x;
}
while(x<1 || x>12);

cout << month[x-1] << endl;

return 0;
}



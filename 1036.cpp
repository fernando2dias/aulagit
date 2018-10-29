#include <bits/stdc++.h>
using namespace std;

int main(){
double a,b,c, delta, r1, r2;
double *p_a=&a, *p_b=&b, *p_c=&c, *p_delta=&delta, *p_r1=&r1, *p_r2=&r2;


cout << fixed << setprecision(5);
cin >> *p_a >> *p_b >> *p_c;
*p_delta = pow(*p_b,2)-4*(*p_a)*(*p_c);

if(*p_delta < 0.0 || *p_a == 0){
    cout << "Impossivel calcular" << endl;
}else{
    *p_r1 = (-(*p_b)+(sqrt(*p_delta)))/(2*(*p_a));
    *p_r2 = (-(*p_b)-(sqrt(*p_delta)))/(2*(*p_a));

    cout << "R1 = " << *p_r1 << endl << "R2 = " << *p_r2 << endl;
}

return 0;
}

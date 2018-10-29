#include <bits/stdc++.h>

using namespace std;
int main (){
    int cod, qtd;
    float total;
    map<int, float>produto;
    produto[1] = 4.00;
    produto[2] = 4.50;
    produto[3] = 5.00;
    produto[4] = 2.00;
    produto[5] = 1.50;

    cin >> cod >> qtd;
    total = produto[cod] * qtd;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;

return 0;
}

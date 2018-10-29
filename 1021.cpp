#include <bits/stdc++.h>

using namespace std;

int main(){
<<<<<<< HEAD
    double valor;
    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, moedaUm=0, moeda50=0, moeda25=0, moeda10=0, moeda5=0, moeda1=0;
=======
float valor;
int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, moedaUm=0, moeda50=0, moeda25=0, moeda10=0, moeda5=0, moeda1=0;
cin >> valor;
>>>>>>> d7539a48855368bf9ab2df553b8161a33b3722a4

    do{
        cin >> valor;
    }while(valor < 0.00 & valor > 1000000.00);



if(0.00 <= valor <= 1000000.00){
cout << fixed << setprecision(2);


    if(valor >= 100.00){
        nota100 = valor/100.00;
        valor = valor - (nota100*100.00);
    }

    if(valor >= 50.00){
        nota50 = valor/50.00;
        valor = valor - (nota50*50.00);
    }

    if(valor >= 20.00){
        nota20 = valor/20.00;
        valor = valor - (nota20*20.00);
    }

    if(valor >= 10.00){
        nota10 = valor/10.00;
        valor = valor - (nota10*10.00);
    }

    if(valor >= 5.00){
        nota5 = valor/5.00;
        valor = valor - (nota5*5.00);
    }

    if(valor >= 2.00){
        nota2 = valor/2.00;
        valor = valor - (nota2*2.00);
    }

    if(valor >= 1.00){
        moedaUm = valor/1.00;
        valor = valor - (moedaUm*1.00);
    }

    if(valor >= 0.50){
        moeda50 = valor/0.50;
        valor = valor - (moeda50*0.50);
    }

    if(valor >= 0.25){
        moeda25 = valor/0.25;
        valor = valor - (moeda25*0.25);
    }
    if(valor >= 0.10){
        moeda10 = valor/0.10;
        valor = valor - (moeda10*0.10);
    }
    if(valor >= 0.05){
        moeda5 = valor/0.05;
        valor = valor - (moeda5*0.05);
    }
    if(valor >= 0.01){
<<<<<<< HEAD
        moeda1 = valor/0.01;
=======
        //    cout << "troco ->" << valor;
        (float)moeda1 = valor/0.01;
        //valor = valor - (moeda1*0.01);
>>>>>>> d7539a48855368bf9ab2df553b8161a33b3722a4
    }
}

cout << "NOTAS" << endl;
cout << nota100 <<" nota(s) de R$ 100.00" << endl;
cout << nota50 <<" nota(s) de R$ 50.00" << endl;
cout << nota20 <<" nota(s) de R$ 20.00" << endl;
cout << nota10 <<" nota(s) de R$ 10.00" << endl;
cout << nota5 <<" nota(s) de R$ 5.00" << endl;
cout << nota2 <<" nota(s) de R$ 2.00" << endl;
cout << "MOEDAS" << endl;
cout << moedaUm <<" moeda(s) de R$ 1.00" << endl;
cout << moeda50 <<" moeda(s) de R$ 0.50" << endl;
cout << moeda25 <<" moeda(s) de R$ 0.25" << endl;
cout << moeda10 <<" moeda(s) de R$ 0.10" << endl;
cout << moeda5 <<" moeda(s) de R$ 0.05" << endl;
cout << moeda1 <<" moeda(s) de R$ 0.01" << endl;

return 0;
}

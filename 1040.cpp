#include <bits/stdc++.h>

using namespace std;

int main(){
vector<float> notas(4);
float media, notaExame, mediaFinal;
cout << fixed << setprecision(1);
cin >> notas[0] >> notas[1] >> notas[2] >> notas[3];
notas[0] = notas[0]*0.2;
notas[1] = notas[1]*0.3;
notas[2] = notas[2]*0.4;
notas[3] = notas[3]*0.1;
media = notas[0]+notas[1]+notas[2]+notas[3];

if(media >= 7.0){
    cout << "Media: " << media << endl << "Aluno aprovado." << endl;
}

if(media >= 5.0 && media < 7.0){
    cin >> notaExame;
    mediaFinal = (notaExame + media)/2.0;
    cout << "Media: " << media << endl << "Aluno em exame." << endl;
    cout << "Nota do exame: " << notaExame << endl;
    if(mediaFinal >= 5.0){
        cout << "Aluno aprovado." << endl << "Media final: " << mediaFinal << endl;
    }else{
        cout << "Aluno reprovado." << endl << "Media final: " << mediaFinal << endl;
    }
}

if(media < 5.0){
    cout << "Media: " << media << endl << "Aluno reprovado." << endl;
}


return 0;
}

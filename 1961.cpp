#include <bits/stdc++.h>

using namespace std;

int main() {
<<<<<<< HEAD

    int pulo=0, cano=0, win=0, gameover=0;
    cin >> pulo >> cano;
    int altura[cano];

    for(int i=0; i < cano; i++){
    cin >> altura[i];
    }

    for(int i=0; i < cano-1; i++){
        if((abs(altura[i+1]- altura[i])) <= pulo){
            win++;
        }else{
            gameover++;
            break;
        }
    }


    if(gameover>0){
        cout<< "GAME OVER" << endl;
    }else{
        cout << "YOU WIN" << endl;

    }

    return 0;
=======
    bool win;
  int n, p, i, a;
  while (cin >> p >> n && (1 <= p <= 5 && 2 <= n <= 100)) {

        int cano[n];
        for(i=0; i<n; i++){
        cin >> cano[i];
        if(cano[i]>10 || cano[i]<0){
            exit(0);
        }
        }
        for(i=0; i<(n-1); i++){
          if((cano[i]+p) < cano[i+1]){
            win = false;
            break;
          }else{
              win = true;
          }
    }
    if(win==true){
        cout << "YOU WIN" << endl;
    }else{
        cout << "GAME OVER" << endl;
    }
  }



  return 0;
>>>>>>> a1fa401e73d30876c0a7d4e9442ce0c041949548
}

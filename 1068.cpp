#include<bits/stdc++.h>
using namespace std;

int main(){

        string s;

        while(getline(cin,s)){

                stack<char> p;

                for(int i=0; i<(int)s.length();i++){

                        if(s[i] == '('){
                                p.push(i);
                        }
                        if(s[i] == ')'){
                                if(!p.empty()){
                                        p.pop();
                                }else{
                                        p.push(i);
                                }
                        }
                }

                if(p.empty()){
                        cout << "correct" << endl;
                }else{
                        cout << "incorrect" << endl;
                }
        }


        return 0;
}

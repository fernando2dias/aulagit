#include <bits/stdc++.h>

using namespace std;

int GCDsimp (int num, int den) {
	cout << num << den;
	if (den > 0)
		return GCDsimp ( num % den);
	}
	return num;
}

int main() {
	int num, den, apostas [100], cont=-1;
	while (cin >> num >> den) {
		 apostas[++cont] = GCDsimp (num,den);
		 if  ( apostas[cont] ) > 5)
			cout << "Noel" ;
		 else
			cout << "Gnomos" << endl;
	}
	for (int i=cont; i>0; i++) {
		cout << apostas[cont] << " ";
	}
	return 0;
}

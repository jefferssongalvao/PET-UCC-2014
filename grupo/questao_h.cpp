#include <iostream>

using namespace std;

int main() {
	int b, n, d, c, v, dif;
	bool flag, pago;
	
	while(cin >> b && cin >> n)	{

		if(b == 0 && n == 0) break;

		int *saldo = new int[b];
		for (int i = 0; i < b; ++i)
			cin >> saldo[i];

		int ** cred = new int*[n];
		for (int i = 0; i < n; ++i) {
			cred[i] = new int[3];
			cin >> cred[i][0]; cred[i][0]--;
			cin >> cred[i][1]; cred[i][1]--;
			cin >> cred[i][2];
		}

		flag = true;
		pago = true;		
		while(flag) {
			for (int i = 0; i < n; ++i) {
				if(cred[i][2] > 0 && saldo[cred[i][0]] > 0) {
					if(cred[i][2] < saldo[cred[i][0]])
						dif = cred[i][2];
					else if(cred[i][2] > saldo[cred[i][0]])
						dif = saldo[cred[i][0]];
					else
						dif = cred[i][2];
					cred[i][2] -= dif;
					saldo[cred[i][0]] -= dif;
					saldo[cred[i][1]] += dif;
					flag = true;
				} else {
					flag = false;
				}
			}			
			for (int i = 0; i < n; ++i){
				if(cred[i][2] == 0){
					pago = true;
				} else {
					pago = false;
					break;
				}
			}
		}

		if(pago)
			cout << "S\n";
		else
			cout << "N\n";

		delete [] saldo;
		delete [] cred;

	}
}
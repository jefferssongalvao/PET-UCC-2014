#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void cpf(string n) {
	int cont, j, aux = 1, t = 9, dig;
	while(aux >= 0){
		cont = 0; j = aux;
		for(int i = 0; i < t; i++) {
			dig = (int) n[i] - 48;
			cont += dig * j++;
		}
		cont = ( cont - (n[t]-48) ) % 11;
		if(cont != 0 && cont != 10) {
			cout << "N\n";
			return;
		}
		t++;
		aux--;
	}
	cout << "S\n";
}

int main() {
	
	string n;
	
	while(cin >> n)
		cpf(n);
	
}

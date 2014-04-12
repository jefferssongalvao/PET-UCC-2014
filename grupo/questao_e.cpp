#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	int maior = 0;

	while(cin >> n){
		if(n == 0) return 0;
		string *palavras = new string[n];

		for(int i = 0; i < n; i++){
			cin >> palavras[i];
			if(palavras[i].size() > maior)
				maior = palavras[i].size();
		}

		for(int i = 0; i < n; i++){
			cout << " ";
			int cont = 0;
			while(cont < (maior - palavras[i].size())){
				cout << " ";
				cont++;
			}
			cout << palavras[i] << endl;
		}
	}
}

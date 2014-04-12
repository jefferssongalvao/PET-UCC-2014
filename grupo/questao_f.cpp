#include <iostream>
#include <string>

using namespace std;

void pontuacao(int media) {
	if(media <= 3)
		cout << "250" << endl;
	else if(media > 3 && media < 6)
		cout << "500" << endl;
	else
		cout << "1000" << endl;
}

int main(){
	string str;
	while(getline(cin, str)){

		int n = str.size(), cont = 0, div = 0, soma = 0;
		bool flag;

		for(int i = 0; i < n; i++) {
			cont = 0;
			flag = true;
			while(!isspace(str[i])) {
				if(isalpha(str[i]) && flag){
					cont++;
				} else if(str[i] == '.'){
					i++;
					if(str[i] != '.' && str[i] != '_' && !isalpha(str[i]) && !isdigit(str[i]) && cont != 0) {
						cont++;
						break;
					} else {
						flag = false;
						cont = 0;
					}
				} else {
					cont = 0;
				}
				i++;
				if(i >= n ) break;
			}
			if(cont > 0) {
				div++;
				soma += cont;
			}
		}
		int media = 0;
		if(div > 0){
			media = soma / div;
		}
		pontuacao(media);
	}
}
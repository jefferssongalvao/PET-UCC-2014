#include <iostream>

using namespace std;

int main() {
	
	int n, s, mov, menor;
	
	while(cin >> n && cin >> s) {
		for(int i = 0; i < n; i++){
			if(cin >> mov > 0) 
				s += mov;
			else
				s -= mov;
			if (s < menor)
				menor = s;
		}
		cout << menor << endl;
	}	
	
}

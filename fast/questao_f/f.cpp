#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string gab;
	string res;
	int acertos;

	while(cin >> n) {
		cin >> gab;
		cin >> res;
		acertos = 0;
		for(int i = 0; i < n; i++){
			if(gab[i] == res[i])
				acertos++;
		}
		cout << acertos << endl;
	}
}
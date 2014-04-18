#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {

	string str;
	int n;
	bool flag;
	char inicio;

	while(getline(cin, str)){

		n = str.size();

		sort(str.begin(), str.end());
		while(isspace(str[0])) {
			for(int i = 0; i < n; i++)
				str[i] = str[i+1];
			n--;
		}

		flag = true;
		inicio = str[0];

		for(int i = 1; i <= n; i++) {
			if(str[i] != str[i-1]) {
				if(str[i] != str[i-1]+1) {
					if(flag) {
						cout << inicio << ":" << inicio;
					} else {
						cout << inicio << ":" << str[i-1];
					} 
					flag = true;
				} else {
					flag = false;
				}
			} else {
				flag = false;
			}
			if(flag && i < n) {
				inicio = str[i];
				cout << ", ";
			}
		}
		cout << endl;

	}

}
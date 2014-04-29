#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	bool neg = 0, ita = 0;
	while(getline(cin, str)) {
		for(int i = 0; i < str.size(); i++) {
			if(str[i] == '*'){
				if(!ita) {
					cout << "<b>";
					ita = true;
				} else {
					cout << "</b>";
					ita = false;
				}
			} else if(str[i] == '_') {
				if(!neg){
					cout << "<i>";
					neg = true;
				} else {
					cout << "</i>";
					neg = false;
				}
			} else if(isspace(str[i]))
				cout << " ";
			else
				cout << str[i];
		}
		cout << endl;
	}
}
#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;

int main(){
	string str;

	while(getline(cin, str)){

		char last = str[0];
		int cont = 0;
		bool ok = true;
		int n = str.size();

		for(int i = 1; i < n; i++){
			last = tolower(last);
			
			while(!isspace(str[i])){
				i++;
				if(i >= n ) break;
			}
			
			if(i < n){
				while(!isalpha(str[i])){
					i++;
					if(i >= n ) break;
				}
			}

			str[i] = tolower(str[i]);
			if(last == str[i] && ok == true){
				cont++;
				ok = false;
			} else {
				if(last != str[i]) ok = true;
				last = str[i];
			}

		}
		cout << cont << endl;
	}

}
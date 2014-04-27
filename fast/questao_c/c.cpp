#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void tern(int n, bool flag) {
	if(n == 0 && flag)
		return;
	tern(n/3, true);
	cout << n % 3;		
}

int main() {
	
	cout << fixed << setprecision(4);
	
	int n;
	
	while(cin >> n) {
		tern(n, false);
		cout << endl;
	}	
	
}

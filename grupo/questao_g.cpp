#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void torre (int n, char orig, char dest, char aux) {
	if (n == 1) {
		cout << n << " " << orig << " " << dest << endl;
		return;
	}
	torre(n-1,orig,aux,dest);
	cout << n << " " << orig << " " << dest << endl;
	torre(n-1,aux,dest,orig);
}
int main() {
	int discos;
	while(cin >> discos){
		torre(discos, 'A', 'C', 'B');
	}
	return 0;
}
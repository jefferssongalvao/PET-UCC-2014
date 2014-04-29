#include <iostream>

using namespace std;

int fib(int n) {
	
	int f = n, fibAA = 0, fibA = 1;

    for( int i = 2; i <= n; ++i ) {
        f     = fibA + fibAA;
        fibA  = f;
        fibAA = fibA;
    }
    
    return f;
}

int main() {
	int n, m;
	while(cin >> n >> m)
		cout << fib( fib( n ) ) % m << endl;
}
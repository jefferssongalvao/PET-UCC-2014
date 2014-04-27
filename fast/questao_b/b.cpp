#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	cout << fixed << setprecision(3);
	
	double km, l;
	
	while(cin >> km >> l)
		cout << km/l << " km/l" << endl;
	
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	
	cout << fixed << setprecision(4);
	
	double x1, x2, y1, y2;
	
	while(cin >> x1 >> y1 >> x2 >> y2)
		cout << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) << endl;
	
}

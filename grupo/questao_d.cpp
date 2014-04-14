#include <iostream>
#include <string>

using namespace std;

int main(){
	string v[12] = { "C", "C#/Db", "D", "D#/Eb", "E", "F", "F#/Gb", "G", "G#/Ab", "A", "A#/Bb","B" };
	int tecla;
	while(cin >> tecla ){
		cout << v[tecla % 12] << endl;
	}
}

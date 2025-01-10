#include <iostream>
#include <string>
using namespace std;

int main() {
	string sen;
	cin >> sen;

	int count = 0;
	for (char c: sen) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			count++;
		}
	}
	cout << sen << " : " << count;
}

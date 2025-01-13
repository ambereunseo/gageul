#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string N;
	getline(cin, N);

	stringstream ss(N);
	string sen;
	vector <string> list;

	while (ss >> sen) {
		list.push_back(sen);
	}
	cout << list.size() << endl;
}

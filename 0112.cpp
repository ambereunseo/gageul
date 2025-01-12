#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	for (int a = 0; a < N-1 ; a++) {
		for (int b = 0; b < a; b++) {
			cout << " ";
		}
		for (int c = 0; c < 2 * (N - a) - 1; c++) {
			cout << "*";
		}
		cout << endl;
	}	


	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < N-i ; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2*i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

#include <iostream>
using namespace std;


/*
********* 별 9, 공백 0  i = 5 공백: N-i, 별: 2*i -1 / a =0 
 ******* 별 7 공백 2  i=4 / a = 2
  ***** 별 5 공백 4
   *** 별 3 공백 5
	* 별 1 공백 8
*/

int main() {
	int N = 0;
	cin >> N;

	for (int a = 1; a < N+1 ; a++) {
		for (int b = 0; b < a-N; b++) {
			cout << " ";
		}
		for (int c = 1; c < 2 * a - 1; c++) {
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
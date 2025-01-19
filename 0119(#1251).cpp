/*
알파벳 소문자로 이루어진 단어를 가지고 아래와 같은 과정을 해 보려고 한다.

먼저 단어에서 임의의 두 부분을 골라서 단어를 쪼갠다. 
즉, 주어진 단어를 세 개의 더 작은 단어로 나누는 것이다. 각각은 적어도 길이가 1 이상인 단어여야 한다.
이제 이렇게 나눈 세 개의 작은 단어들을 앞뒤를 뒤집고, 이를 다시 원래의 순서대로 합친다.
*/

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
	string N;
	cin >> N;

	string result = "~";
	vector<string> str;
	string combine;
	for (size_t i = 1; i < N.size() - 1; i++) {
		for (size_t j = i + 1; j < N.size(); j++) {
			string one = N.substr(0, i);
			string two = N.substr(i, j - i);
			string three = N.substr(j);

			reverse(one.begin(), one.end());
			reverse(two.begin(), two.end());
			reverse(three.begin(), three.end());
			
			combine = one + two + three;

			if (combine < result) {
				result = combine;
			}
		}
	}
	cout << result << endl;
}

#include <iostream>
using namespace std;

void swap (int & a, int & b) {
  int temp = a ;
  a = b ;
  b = temp ;
}

int main() {
  int v1 = 5, v2 =19 ;
  cout << "Before swap: " << "v1 = " << v1 << ", v2 = ", << v2 << "\n";
  swap (v1,v2);
  cout << "After swap: " << "v1 = " << v1 << ", v2 = ", << v2 << "\n";
}




#include <iostream>
using namespace std;
int main() {
  if (int a, b; cin >> a >> b) {
    cout << "Intial numbers are:" << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swap numbers are:" << a << " " << b << endl;
  }
  cout << "Another method, enter again:" << endl;
  if (int a, b; cin >> a >> b) {
    cout << "Intial numbers are:" << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "Swap numbers are:" << a << " " << b << endl;
  }
  return 0;
}
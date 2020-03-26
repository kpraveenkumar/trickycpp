#include <iostream>
using namespace std;
int main() {
  if (int a, b; cin >> a >> b) {
    cout << "Max:" << (a + b + abs(a - b)) / 2 << endl;
    cout << "Min:" << (a + b - abs(a - b)) / 2 << endl;
  }
  return 0;
}
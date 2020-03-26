#include <iostream>
using namespace std;

int main() {
  if (int x, y; cin >> x >> y && !(x ^ y)) {
    cout << x << " and " << y << " are equal" << endl;
  } else {
    cout << x << " and " << y << " are not equal" << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  // Divide by 2
  int n;
  cin >> n;
  auto t{n >> 1};
  cout << "Divide by 2:" << t << endl;
  auto f{n >> 2};
  cout << "Divide by 4:" << f << endl;
  auto e{n >> 3};
  cout << "Divide by 8:" << e << endl;
  auto s{n >> 4};
  cout << "Divide by 16:" << s << endl;
  return 0;
}
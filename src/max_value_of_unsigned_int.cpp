#include <iostream>
#include <limits>
using namespace std;
int main() {
  unsigned int max = 0;
  cout << ~max << endl;
  cout << numeric_limits<unsigned int>::max() << endl;
  uint64_t max_uint = 0;
  cout << ~max_uint << endl;
  cout << numeric_limits<uint64_t>::max() << endl;
  return 0;
}
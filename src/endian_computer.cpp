#include <iostream>
using namespace std;

int main() {
  unsigned int n = 1;
  char *c = (char *)&n;
  cout << *c << endl;
  if (*c) {
    cout << "Little Endian" << endl;
  } else {
    cout << "Big endian" << endl;
  }
  return 0;
}
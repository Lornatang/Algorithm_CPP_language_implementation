#include <iostream>

using namespace std;

int search(int a[], int v, int l, int r) {
  while (r >= l) {
    int m = (l + r) / 2;
    if (v == a[m]) return m;
    if (v < a[m])
      r = m - 1;
    else
      l = m + 1;
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  int a[] = {1, 2, 3, 4};
  search(a, 1, 2, 3);
  return 0;
}

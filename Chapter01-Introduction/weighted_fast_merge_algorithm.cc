#include <iostream>
using namespace std;

static const int N = 10000;

int main() {
  int i, j, p, q, id[N], sz[N];
  for (i = 0; i < N; i++) {
    id[i] = i;
    sz[i] = 1;
  }
  while (cin >> p >> q) {
    for (i = p; i != id[i]; i = id[i])
      ;
    for (j = q; j != id[j]; j = id[j])
      ;
    if (i == j) continue;
    if (sz[i] < sz[j]) {
      id[i] = j;
      sz[j] += sz[i];
    } else {
      id[j] = i;
      sz[i] += sz[j];
    }
    cout << " " << p << " " << q << endl;
  }
}
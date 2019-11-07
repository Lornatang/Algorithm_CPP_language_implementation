#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

typedef int Number;

Number randNum() { return rand(); }

int main(int argc, char const *argv[]) {
  int N = atoi(const_cast<char *>(argv[1]));
  float m1 = 0.0, m2 = 0.0;
  for (int i = 0; i < N; i++) {
    Number x = randNum();
    m1 += ((float)x) / N;
    m2 += ((float)x * x) / N;
  }
  cout << "     Avg.: " << m1 << endl;
  cout << "Std. dev.: " << sqrt(m2 - m1 * m1) << endl;
  return 0;
}

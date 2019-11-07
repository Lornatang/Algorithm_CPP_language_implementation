#include <iostream>

using namespace std;

int lg(int);

int main(int argc, char const *argv[]) {
  for (int i = 1, N = 10; i <= 6; i++, N *= 10)
    cout << N << " " << lg(N) << " " << N * lg(N) << endl;
  return 0;
}

int lg(int N) {
  int i;
  for (i = 0; N > 0; i++, N /= 2)
    ;
  return i;
}
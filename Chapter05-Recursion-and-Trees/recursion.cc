#include <iostream>
using namespace std;

int factorial(int N) {
  if (N == 0) return 1;
  return N * factorial(N - 1);
}
int puzzle(int N) {
  if (N == 1) return 1;
  if (N % 2 == 0)
    return puzzle(N / 2);
  else
    return puzzle(3 * N + 1);
}
int gcd(int m, int n) {
  if (n == 0) return m;
  return gcd(n, m % n);
}
char *a;
int i;
int eval() {
  int x = 0;
  while (a[i] == ' ') i++;
  if (a[i] == '+') {
    i++;
    return eval() + eval();
  }
  if (a[i] == '*') {
    i++;
    return eval() * eval();
  }
  while ((a[i] >= '0') && (a[i] <= '9')) x = 10 * x + (a[i++] - '0');
  return x;
}

void move(char x, char y);
void hannuo(int n, char one, char two, char three) {
  void move(char x, char y);
  if (n == 1)
    move(one, three);
  else {
    hannuo(n - 1, one, three, two);
    move(one, three);
    hannuo(n - 1, two, one, three);
  }
}
void move(char x, char y) { cout << x << "--->" << y << endl; }

int main() {
  hannuo(5, 'A', 'B', 'C');
  return 0;
}

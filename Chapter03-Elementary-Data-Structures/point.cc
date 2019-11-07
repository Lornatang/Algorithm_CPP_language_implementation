#include "point.h"
#include <math.h>
#include <iostream>

using namespace std;

float distance(point a, point b) {
  float dx = a.x - b.x;
  float dy = a.y - b.y;
  return sqrt(dx * dx + dy * dy);
}

int main(int argc, char const *argv[]) {
  point a, b;
  a.x = 5;
  a.y = 4;
  b.x = 7;
  b.y = 6;
  cout << distance(a, b);
  return 0;
}

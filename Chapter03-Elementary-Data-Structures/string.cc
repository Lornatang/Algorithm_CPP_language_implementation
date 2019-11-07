#include <assert.h>
#include <iostream>
using namespace std;

unsigned __strlen(const char *arr) {
  const char *temp = arr;
  while (*temp++)
    ;
  return temp - arr - 1;
}

char *__strcpy(char *des, const char *src) {
  while ((*des++ = *src++) != '\0')
    ;
  return des;
}

int main(int argc, char const *argv[]) {
  const char *arr = "123456";
  char *temp = __strcpy(temp, arr);
  cout << __strlen(arr) << endl;
  printf("%s\n", temp);
  // cout << temp << endl;
  return 0;
}

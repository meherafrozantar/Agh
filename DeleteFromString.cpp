#include<iostream>
#include<string.h>
using namespace std;

int main() {
  char s[20];
  cin >> s;
  int n = strlen(s);
  for (int i = 1; i < n; i++) {
    s[i - 1] = s[i];
  }
  s[n - 1] = '\0';
  cout << s << '\n';
  return 0;
}

#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max_num = -100; // initializing with a small number which is smaller than any number in a
  for (int i = 0; i < n; i++) {
    if (a[i] > max_num) {
      max_num = a[i];
    }
  }
  cout << max_num << '\n';
  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int n, i, j;

  cin >> n;

  for (i = 1; i <= n; i++) {
    for (int k = 1; k <= n - i; k++)
      cout << " "; // for spaces from right
    for (j = i; j > 0; j--)
      cout << j; // prints rightside nums
    for (int l = 2; l <= i; l++)
      cout << l; // prints leftside nums
    cout << endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int value = 3 * x;
    int value2 = 2 * y;
    int value3 = min(value, value2);
    cout << value3 << endl;
  }
  return 0;
}
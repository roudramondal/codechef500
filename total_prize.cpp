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
    int sum = (x * 10 + 90 * y);
    cout << sum << endl;
  }
  return 0;
}
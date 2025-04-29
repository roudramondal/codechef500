#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int subtraction_value = abs(x - y);
    cout << subtraction_value << endl;
  }
  return 0;
}
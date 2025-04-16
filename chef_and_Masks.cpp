#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int value1 = x * 100;
    int value2 = y * 10;
    if (value1>value2||value1==value2)
    {
      cout << "Cloth" << endl;
    }
    else
    {
      cout << "Disposable" << endl;
    }
  }
  return 0;
}
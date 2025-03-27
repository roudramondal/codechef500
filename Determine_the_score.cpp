#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    if (a%10==0)
    {
      int value1 = a / 10;
      int final = value1 * b;
      cout << final << endl;
    }
    
  }
  return 0;
}
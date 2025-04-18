#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin>>t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    int amount_of_mango = (z - y) / x;
    cout << amount_of_mango << endl;
  }
  return 0;
}
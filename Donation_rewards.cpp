#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    if (x<=3)
    {
      cout << "BRONZE" << endl;
    }
    else if (3<x&&x<=6)
    {
      cout << "SILVER" << endl;
    }
    else 
    {
      cout << "GOLD" << endl;
    }
  }
  return 0;
}
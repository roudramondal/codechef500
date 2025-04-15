#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x, n, m;
  cin >> x >> n >> m;
  int sum = x+m;
  
  if (n<=sum)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}
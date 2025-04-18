#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,x;
    cin >> n >> x;
    int find_value = n / x;
    int final_value = find_value / 3;
    cout << final_value << endl;
  }
  return 0;
}
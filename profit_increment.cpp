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
    int find_firstValue = x + ((x * 10) / 100);
    int second_value = x - y;
    int final_value = find_firstValue-second_value;
    cout << final_value << endl;
  }
  return 0;
}
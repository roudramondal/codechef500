#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sum1 = a * c;
  int sum2 = b * d;
  int sum3 = sum1 + sum2;
  cout << sum3 << endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int first_value = a - c;
    int second_value = b - d;
    if (first_value<second_value)
    {
      cout << "First" << endl;
    }
    else if(first_value>second_value)
    {
      cout << "Second" << endl;
      
    }
    else
    {
      cout << "Any" << endl;
    }
  }
  return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
   int s,n,m,ans;
  cin>> s >> n >> m;
  ans = pow(s, n);
  ans = ans % 10;
  ans = pow(ans, m);
  ans = ans % 10000000007;
  cout<<ans;
  return 0;
}
#include <iostream>
using namespace std;

int main() 
{
   int n, count=0, h1, h2;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];
  cin>>h1>>h2;
  for(int i=0; i<n; i++)
    if(h1%arr[i]==0 && h2%arr[i]==0)
      count++;
  cout<<count;
    return 0;
}
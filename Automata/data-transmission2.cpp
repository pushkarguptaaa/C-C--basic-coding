#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string s;
  cin>>s;
  int i,j,count=0;
  for(i=0,j=s.length()-1;i<s.length();i++,j--){
    if(s[i]== s[j]) count++;
  }
  cout<<count;
    return 0;
}
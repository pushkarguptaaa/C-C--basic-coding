#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string s;
  cin>>s;
  int asc[26]={0}, count=0;
  for(int i=0; i<s.length(); i++)
    asc[s[i]- 'a']++;
  for(int i=0; i<26; i++)
    if(asc[i] == 1)
      count++;
  cout<<count;
    return 0;
}
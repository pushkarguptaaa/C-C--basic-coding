#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
   string s;
  getline(cin, s);
  int freq[128] = {0};
  for(int i= 0; i<s.length(); i++)
    freq[s[i]]++;
  int max = 0;
  char max_char;
  for(int i=0; i<128; i++){
     if(freq[i] > max){
         max = freq[i];
         max_char = i;
     }
  }
  cout<<max_char;
    return 0;
}
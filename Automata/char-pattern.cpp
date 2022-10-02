#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
  int k;
  char s[10];
     cin>>s;
     k = strlen(s);
 
  for(int i=0; i<k; i++){
     for(int j=0; j<k; j++){
        if(i==j || k-j-1 == i){
           cout<<s[j]; 
        } else cout<<" ";
     }
    cout<<"\n";
  }
    return 0;
}
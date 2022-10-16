#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
  string a, b;
  cin>>a>>b;
  int i,j;
  for(i=0, j=0; i<a.length(); i++){
     if(a[i] == b[j]){
        j++; 
     } else{
        cout<<a[i]; 
     }
  }
  if(j == a.length()){
     cout<<"NA"; 
  }
   
    return 0;
}
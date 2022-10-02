#include <iostream>
using namespace std;

int main() 
{
   int r, sp, star, n;
  cin>>n;
  for(r=n; r>=2; r--){
     for(sp=1; sp<=n-r; sp++) {
       cout<<" ";
     }
     for(star=1; star<=2*r-1; star++) {
       cout<<"*";
     }
    cout<<"\n";
  }
  for(r=1; r<=n; r++){
   for(sp=1; sp<=n-r; sp++){
      cout<<" "; 
   }
   for(star=1; star<=2*r-1; star++){
      cout<<"*"; 
   }
    cout<<"\n";
  }
  
    return 0;
}
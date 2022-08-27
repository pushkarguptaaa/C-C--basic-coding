#include <iostream>
using namespace std;

int main() 
{
  unsigned long long int num;
  cin>>num;
  int value = 0, base= 1 ;
  while(num){
    value+= (num%10)*base;
    num/= 10;
    base*= 2;
  }
  cout<<value;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n, index=0, len=0;
   cin >> n;
  int arr[50];
  while(n!=0){
    arr[index++] = n%10;
    n= n/10;
    len++;
  }
  sort(arr, arr+len);
  for(int i=0; i<len; i++){
    cout<< arr[i] << " "; 
  }
    return 0;
}
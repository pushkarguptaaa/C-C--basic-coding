#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<binary_search(v.begin(),v.end(), 5)<<endl;
    cout<<lower_bound(v.begin(),v.end(), 5)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(), 5)-v.begin()<<endl;

    int a = 3;
    int b = 5;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<"value of a-> "<<a<<endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate-> "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

}
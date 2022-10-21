#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(){

    // ARRAYS (STATIC MEMORY ALLOCATION)

    int basic[3] = {1,2,3};
    array<int, 4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0; i<size; i++){
        // cout<<a[i]<<endl;
    }

    // cout<<"Element at 2nd index-> "<<a.at(2)<<endl;    
    // cout<<"Empty or not-> "<<a.empty()<<endl;
    // cout<<"First element-> "<<a.front()<<endl;
    // cout<<"Last element-> "<<a.back()<<endl;

    // VECTORS (DYNAMIC MEMORY ALLOCATION)

    vector<int> b(5,1);
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(b);
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> v;
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd index-> "<<v.at(2)<<endl; 
    cout<<"First element-> "<<v.front()<<endl;
    cout<<"Last element-> "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

}
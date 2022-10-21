#include <iostream>
#include <deque>
using namespace std;

int main(){

    // DEQUE
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;
    // d.pop_back();
    // d.pop_front();
    // for(int i: d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    cout<<d.at(1)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    cout<<"Before erase"<<" "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase"<<" "<<d.size()<<endl;
     for(int i: d){
        cout<<i<<" ";
    }
    cout<<endl;

}
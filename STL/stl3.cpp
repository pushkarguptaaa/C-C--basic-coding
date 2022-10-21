#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;
    list<int> n(l);
    list<int> o(5,100);
    l.push_back(1);
    l.push_front(2);
    for(int i: l){
        cout<<i<< " ";
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i: l){
        cout<<i<< " ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
}
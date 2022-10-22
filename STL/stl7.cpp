#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "Gupta";
    m[2] = "Kumar";
    m[3] = "Pushkar";
    // m.insert({5, "hi"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"finding 2-> "<< m.count(2)<<endl;
    // m.erase(3);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(2);
    for(auto i= it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    cout<<endl;

}
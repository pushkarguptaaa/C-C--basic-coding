#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){

    // STACK
    stack<string> s;
    s.push("Pushkar");
    s.push("Kumar");
    s.push("Gupta");
    // cout<<"Top element-> "<<s.top()<<endl;
    s.pop();
    // cout<<"Top element-> "<<s.top()<<endl;
    // cout<<"Size-> "<<s.size()<<endl;
    // cout<<"Empty-> "<<s.empty()<<endl;

    // QUEUE
    queue<string> q;
    q.push("Pushkar");
    q.push("Kumar");
    q.push("Gupta");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"Size-> "<<q.size()<<endl;
}
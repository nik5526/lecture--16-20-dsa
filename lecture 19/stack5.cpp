#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    // In stack we can insert and delete elements one way .
    
    s.push("Nikhil");
    s.push("Raj");
    s.push("Yadav");

    cout<<"element on the top is "<< s.top()<<endl;

    s.pop();

    cout<<"element on the top is "<<s.top()<<endl;
    

}

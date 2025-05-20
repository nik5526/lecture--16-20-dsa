#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    //In queue there is first in first out.It basically depicts a line.

    q.push("Nikhil");
    q.push("Raj");
    q.push("Yadav");

    cout<<"element on the front is "<< q.front()<<endl;

    q.pop();

    cout<<"element on the front is "<<q.front()<<endl;

}
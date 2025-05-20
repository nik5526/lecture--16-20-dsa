#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max_priority
    priority_queue<int> maxi;

    //min_prriority
    priority_queue<int, vector<int>,greater<int>> mini;
    int n  = maxi.size();
    int m = mini.size();

    maxi.push(2);
    maxi.push(4);
    maxi.push(1);
    maxi.push(0);

    cout<<"size of the max "<< maxi.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(2);
    mini.push(4);
    mini.push(1);
    mini.push(0);

    cout<<"size of the min "<< mini.size()<<endl;
    for(int i=0;i<mini.size();i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}

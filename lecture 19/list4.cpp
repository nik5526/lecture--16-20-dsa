#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    //in list we can do all the functions that we have done before but we can't print the elements at the nth term 
    //for this we have to traverse the list.

    l.push_back(2);
    l.push_front(1);

    //in list we can simply use earse wee don't have to specify the from where to where we are deleting the element .
    
    l.erase(l.begin());

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

}
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> n;
    //in deque we can enter the elements from front and back as well.
    // and we can also pop elements from front and behind both direction.

    n.push_front(3);
    n.push_front(4);
    n.push_back(2);
    n.push_back(1);
    n.push_back(0);
    //in push back you can only add one item.

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Elements at 1st position is "<< n.at(1)<<endl;
    cout<<"element at front is "<<n.front()<<endl;
    cout<<"element at back is "<<n.back()<<endl;

    n.pop_back();
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //here we use erase to delete the items from the deque. but we have to specify from where to where  we have to delete the deque.

    n.erase(n.begin(),n.begin()+1);

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

}
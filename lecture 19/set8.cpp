#include<iostream>
#include<set>
using namespace std;
int main(){
    // in set it store only uniqe elements , you cannot store multiple elements in set.
    // in set elements come in sorted order only.
    // in set you can not modify the elelment you can only delete tom store it.
    // set is slower than unordered set , when you store an element in the set it does stored in the sorted order.
    set<int> s;

    s.insert(0);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

set<int>:: iterator it = s.begin();
it++;

s.erase(it);
for(auto i:s){
    cout<<i<<" ";
}
cout<<endl;

}

#include<iostream>
#include<map>

using namespace std;
int main(){
    //in map there should be unique key but can be same value.
    map<int,string> m;

    m[1] = "nikhil";
    m[2] = "raj";
    m[5] = "is";
    m[3] = "yadav";

    m.insert({7,"the"});

    for(auto i:m){
        cout<<i.first<<" ";
    }
    cout<<endl;

    cout<<"after erase"<<m.erase(5)<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    cout<<endl;
    
    cout<<"the element is present ?  "<<m.count(4)<<endl;

    auto it = m.find(3);

    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,2);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    //for copy the vector we have name the vector and add the vector which we have to copy
    vector<int> b(a);
    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;
    //here 5 is the size of the vector and 2 is the element in the vector. 
    cout<<"capacity of vector "<<v.capacity()<<endl;
    //in vector at satrtting there is 0 capacity of vector but as you push back the elements in vector it makes it size double.
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"capacity of vector "<<v.capacity()<<endl;
    cout<<"element at position 2 is "<<v.at(2)<<endl;
    cout<<"element at front "<<v.front()<<endl;

    cout<<"vector before pop element used "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    //by using pop_back element it will pop the last element of the vector.

    cout<<"vector after pop element used "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
 
    cout<<"size of the vector before clearing it "<< v.size()<<endl;
    v.clear();
    cout<<"size of the vector after clearing it "<< v.size()<<endl;




}
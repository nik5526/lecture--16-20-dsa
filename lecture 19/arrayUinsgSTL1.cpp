#include<iostream>
#include<array>
//it is basically a static array we dont use it much.
using namespace std;
int main(){
    array<int,4> a = {2,3,5,6};
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

    cout<<"enter the element you want to print "<< a.at(1)<<endl;
    cout<<"array is empty or not "<< a.empty()<<endl;
    cout<<"print the first element in the array "<<a.front()<<endl;
    cout<<"print the last element in the array "<<a.back()<<endl;
}
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int arr[5] = {23,45,1,4,50};
    int n=5;
    selectionSort(arr,5);
}
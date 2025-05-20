#include<iostream>
using namespace std;
int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int k = arr[i];
        int j = i-1;
        while(j>-1 && arr[j]>k){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5] = {23,45,1,4,50};
    int n=5;
    insertionSort(arr,5);
}
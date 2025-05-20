#include<iostream>
using namespace std;
int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        } 
        if(swapped == false){
            break;
        } 
    }
    for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
}
    
    int main()
    {
        int arr[5] = {23, 34, 5, 42, 2};
        bubbleSort(arr, 5);
    }
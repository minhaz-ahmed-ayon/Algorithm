#include<iostream>

using namespace std;

int* selectionSort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

int main(){
    int array[]={1,4,2,3,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int* sortedArray = selectionSort(array, n);
    cout << "Sorted array= ";
    for(int i=0;i<n;i++){
        cout << sortedArray[i] << " ";
    }
    cout << endl;
}
#include<iostream>

using namespace std;

int* insertionSort(int *arr, int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j >0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
}

int main(){
    int array[]={1,4,2,3,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int* sortedArray = insertionSort(array, n);
    cout << "Insertion Sorted array= ";
    for(int i=0;i<n;i++){
        cout << sortedArray[i] << " ";
    }
    cout << endl;
}
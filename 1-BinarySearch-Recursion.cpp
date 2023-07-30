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

int binarySearch(int array[], int num, int low, int high){
    int mid=(low+high)/2;
    if(low>high){
        return -1;
    }
    if(array[mid]==num){
        return mid;
    }
    if(array[mid]>num){
        return binarySearch(array, num, low, mid-1);
    }
    else if(array[mid]<num){
        return binarySearch(array, num, mid+1, high);
    }
    return -1;
}

int main(){
    int array[]={1,4,2,3,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int* sortedArray= selectionSort(array, n);
    int index = binarySearch(sortedArray, 7, 0, n-1);
    if(index==-1){
        cout << "Found" << endl;
    }
    else{
        cout << array[index] << " is found at index " << index ;
    }

}
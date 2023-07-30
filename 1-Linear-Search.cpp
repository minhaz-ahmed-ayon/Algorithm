#include<iostream>

using namespace std;

bool linearSearch(int arr[],int n, int key){
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
        }
    }
    return flag;
}

int main(){
    int array[]={1,4,2,3,6,5,10,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    bool isFound = linearSearch(array, n, 7);
    if(isFound==true){
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

}
#include <iostream>
using namespace std;
void Swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key)
{
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
void printArray(int arr[], int n)
{
int i;
for (i=0; i < n; i++)
cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
int n,x,i;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"Enter Array Elements: ";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
insertionSort(arr,n);
printArray(arr,n);
return 0;
}

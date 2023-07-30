#include <iostream>
using namespace std;
void Swap(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}
void bubbleSort(int arr[], int n)
{
 int i, j;
 for (i = 0; i < n-1; i++)
 for (j = 0; j < n-i-1; j++)
 if (arr[j] > arr[j+1])
 Swap(&arr[j], &arr[j+1]);
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
 bubbleSort(arr,n);
 printArray(arr,n);
 return 0;
}

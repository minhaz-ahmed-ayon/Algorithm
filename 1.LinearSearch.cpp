#include<iostream>
using namespace std;

int searchItem(int arr[], int x, int n)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i]==x)
        return i;
    return -1;
}

int main()
{
   int i,n,x;
   cout<<"Enter the size of array: ";
   cin>>n;
   int arr[n];
   cout<<endl;

   for (i=0; i<n; i++)
   {
       cin>>arr[i];
   }

   cout<<"Search Item: ";
   cin>>x;

   int result= searchItem(arr, x, n);

   if (result==-1)
    cout<<x<<" not found!";

   else
    cout<<x<<" found! "<<result;
   return 0;

}

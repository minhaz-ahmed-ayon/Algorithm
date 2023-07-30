#include <iostream>
using namespace std;
void selectionSort(int arr[])
{
for (int i = 0; i < 9; i++)
{
int min = i;
for (int j = i + 1; j < 10; j++)
{
if (arr[j] < arr[min])
{
min = j;
}
}
if (min != i)
{
int temp = arr[min];
arr[min] = arr[i];
arr[i] = temp;
}
}
}
int main()
{
int myarr[10];
cout << "Enter numbers in any order: " << endl;
for (int i = 0; i < 10; i++)
{
cin >> myarr[i];
}
cout << "Before Sorting: " << endl;
for (int i = 0; i < 10; i++)
{
cout << myarr[i] << " ";
}
cout << endl;
selectionSort(myarr);
cout << "After Sorting: " << endl;
for (int i = 0; i < 10; i++)
{
cout << myarr[i] << " ";
}
return 0;
}

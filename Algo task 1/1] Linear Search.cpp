#include <iostream>
using namespace std;
void linearSearch(int a[], int n)
{
int temp = -1;
for (int i = 0; i < 10; i++) //loop to continue
{
if (a[i] == n)
{
cout << "Element found at position: " << i + 1 << endl;
temp = 0;
break;// to exit once match found
}
}
if (temp == -1) //checking if temp = -1
{
cout << "No Element Found" << endl;
}
}
int main()
{
int arr[10];
cout << "enter values" << endl;
for (int i = 0; i < 10; i++)
{
cin >> arr[i];
}
cout << "enter the number you want to find out" << endl;
int num;
cin >> num;
linearSearch(arr, num);
return 0;
}

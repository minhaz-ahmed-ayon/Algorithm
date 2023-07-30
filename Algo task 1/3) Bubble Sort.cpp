#include <iostream>
using namespace std;
void bubbleSort(int a[])
{
for (int i = 0; i < 10; i++)
{
for (int j = 0; j < (10 - i - 1); j++)
{
if (a[j] > a[j + 1])
{
int temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
}
int main()
{
int myarray[10];
int size;
cout << "Enter numbers in any order: " << endl;
for (int i = 0; i < 10; i++)
{
cin >> myarray[i];
}
cout << "Before Sorting" << endl;
for (int i = 0; i < 10; i++)
{
cout << myarray[i] << " ";
}
bubbleSort(myarray);
cout << endl << "After Sorting" << endl;
for (int i = 0; i < 10; i++)
{
cout << myarray[i] << " ";
}
return 0;
}

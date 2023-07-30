#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int *a, int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << endl;
}
int partition(int *a, int low, int high)
{
    int pivot = a[low];
   int start = low;
    int End = high;
    while (start<End)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[End]>pivot)
        {
            End--;
        }
        if (start<End)
        {
            swap(a[start],a[End]);

        }
    }
  swap(a[low],a[End]);
    return End;
}


void quickSort(int *a, int low, int high)
{
     if (low < high) {
    int pi = partition(a, low, high);
    quickSort(a, low, pi - 1);
    quickSort(a, pi + 1, high);
  }
}



int main()
 { int a[111];
 int n;
  cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter Array Element : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
  quickSort(a, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  printArray(a, n);
}


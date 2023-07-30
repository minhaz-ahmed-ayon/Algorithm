#include<iostream>
using namespace std;

struct Activity
{
    int start, end;
};


void AcitivitySelection(struct Activity a[], int n)
{
    int i,j;
    i=0;
    cout<<a[0].start<<" "<<a[0].end;
    cout<<endl;
    for(j=i+1;j<n;j++)
    {
        if(a[j].start>=a[i].end)
        {
            cout<<a[j].start<<" "<<a[j].end;
            cout<<endl;
            i=j;
        }
    }
}

void BubbleSort(struct Activity a[], int n)
{
    int j,i;
    for(j=1;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i].end>a[i+1].end)
            {
                swap(a[i],a[i+1]);
            }
        }
    }
}


int main()
{
    int a,i;
    cout<<"Enter the number of activities for selection algorithm: ";
    cin>>a;
    struct Activity activity[a];

    for(i=0;i<a;i++)
    {
        cout<<"Enter starting time: ";
        cin>>activity[i].start;
        cout<<"Enter ending time: ";
        cin>>activity[i].end;
    }
    BubbleSort(activity,a);
    cout<<"\nAfter sorting: ";

    for(i=0;i<a;i++)
    {
        cout<<activity[i].start<<" "<<activity[i].end;
        cout<<endl;
    }

    cout<<"\nSelected activities: ";
    AcitivitySelection(activity,a);
}

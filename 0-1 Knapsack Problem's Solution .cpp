#include<iostream>
using namespace std;

struct item
{
    int number;
    int weight;
    int benefit;
};


int knapsack(struct item items[], int capacity, int n)
{
    int arr[capacity+1][n+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0||j==0)
            {
                arr[j][i]=0;
            }
            else
            {
                int weight=items[i-1].weight;
                int benefit=items[i-1].benefit;
                if(weight>j)
                {
                    arr[j][i]=arr[j][i-1];
                }
                else
                {
                    benefit += arr[j-weight][i-1];
                    if(benefit>arr[j][i-1])
                    {
                        arr[j][i]=benefit;
                    }
                    else
                    {
                        arr[j][i]=arr[j][i-1];
                    }
                }
            }
        }
    }
}

int main()
{
    int ItemNumber, Weight, MaxBenefit;
    cout<<"Enter the item number: ";
    cin>>ItemNumber;
    struct item I[ItemNumber+1];
    for(int i=1; i<=ItemNumber; i++)
    {
        I[i].number = i;
        cout<<"Weight of item number: "<<i<<endl;
        cin>>I[i].weight;
        cout<<"Benefit of item number: "<<i<<endl;
        cin>>I[i].benefit;
    }

    cout<<"knapsack size is: ";
    cin>>Weight;
    MaxBenefit=knapsack(I, Weight, ItemNumber);
    cout<<"Maximum benefit will be: "<<MaxBenefit;
    return 0;
}

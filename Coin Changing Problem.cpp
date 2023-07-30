#include<bits/stdc++.h>
using namespace std;

int coins[] = {1, 3, 7, 20, 40, 60, 200, 600, 2000};
int l = sizeof(coins)/sizeof(int);

void printArray(){
    for(int i=0;i<l;i++){
        cout<<coins[i]<<" ";
    }
}


void findMin(int money){
    sort(coins,coins+l);
    cout<<"Sorted : ";
    printArray();
    vector<int> result;

    for(int i=l-1;i>=0;i--){
        while(money>=coins[i]){
            money-=coins[i];
            result.push_back(coins[i]);
        }
    }
    cout<<"\nCoin changes: ";
    for(int i: result){
        cout<<i<<" ";
    }

}



int main()
{

findMin(93);

}

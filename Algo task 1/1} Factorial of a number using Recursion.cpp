#include <iostream>

using namespace std;

int fact(int n)
{
    if(n==2)
        return 2;
    return n*fact(n-1);
}

int main()
{
    int num;
    cout<<"Enter any number you want ";
    cin>>num;
    cout<<"Factorial of Number :"<<fact(num);
    return 0;
}

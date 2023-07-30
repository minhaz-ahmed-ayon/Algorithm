#include<iostream>

using namespace std;

int factorial(int num){
    if(num>1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }
}

int main(){
    int n=5;
    cout <<"Factorial of " << n << "=" << factorial(n) << endl;
}
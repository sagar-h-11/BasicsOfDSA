#include<iostream>
using namespace std;

int printSum(int a){
    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        sum = sum+i;
    }
    return sum;
}

int main(){
    int storeSum = printSum(5);
    cout<<storeSum;

    
    return 0;
}
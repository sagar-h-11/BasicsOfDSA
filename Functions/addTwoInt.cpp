#include<iostream>
using namespace std;

int printInt(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int storeSum = printInt(2,5);
    cout<<storeSum;

    
    return 0;
}
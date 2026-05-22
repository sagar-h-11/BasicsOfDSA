#include<iostream>
using namespace std;

int sumOfDigits(int number){
    int sum = 0;
    while(number!=0){
        int digit = number%10;
        sum = sum+digit;
        number = number/10;
    }
    return sum;
}

int main(){
    int storeSum = sumOfDigits(234);
    cout<<storeSum;

    
    return 0;
}
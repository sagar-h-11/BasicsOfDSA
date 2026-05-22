#include<iostream>
using namespace std;

int productOfDigits(int num){
    int product = 1;
    while(num!=0){
        int digit = num%10;
        product = product*digit;
        num = num/10;
    }
    return product;
}

int main(){
    int storeProductOfDigits = productOfDigits(1234);
    cout<<storeProductOfDigits;

    
    return 0;
}
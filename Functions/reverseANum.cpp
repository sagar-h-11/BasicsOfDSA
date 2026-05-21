#include<iostream>
using namespace std;

int reverseNum(int num){
    int store = 0;
    while (num!=0)
    {
        int digit = num % 10;
        store = store*10 + digit;
        num = num/10;
    }
    return store;
}

int main(){
    int storeReverse = reverseNum(345);
    cout<<storeReverse;

    
    return 0;
}
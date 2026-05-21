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

void checkPalindrome(int num){
    int original = num;
    int reversedNum = reverseNum(num);
    if (reversedNum == original)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome ";
    }
}

int main(){
    checkPalindrome(121);
    return 0;
}
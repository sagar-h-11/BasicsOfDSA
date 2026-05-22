#include<iostream>
using namespace std;

int countDigits(int num){
    int count = 0;
    while (num!=0)
    {
        int digit = num%10;
        count ++;
        num = num/10;
    }
    return count;
}

int main(){
    int storeDigitCount = countDigits(2345);
    cout<<storeDigitCount;

    
    return 0;
}
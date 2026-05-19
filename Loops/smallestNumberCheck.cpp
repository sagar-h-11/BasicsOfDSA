#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int number; 
    cout<<"enter the number: ";
    cin>>number;

    int minimum = INT_MAX;

    while (number!=0)
    {
        int digit = number%10;
        if (digit<minimum)
        {
            minimum = digit;
        }
        number = number/10;
    }
    cout<< minimum;
    
    return 0;
}
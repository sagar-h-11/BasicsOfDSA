#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;


    int largest = INT_MIN;

    while (number!=0)
    {
        int digit = number%10;
        if (digit>largest)
        {
            largest = digit;
        }
        number = number/10;
    }
    cout<<largest;
    

    return 0;
}
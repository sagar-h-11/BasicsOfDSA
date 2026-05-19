#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;

    int original = number;


    int store = 0;

    while (number!=0)
    {
        int calc = number%10;
        store = store*10+calc;
        number = number/10;
    }
    int storage = store;


    if (original==storage)
    {
        cout<<"it is a palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }
    
    
    return 0;
}
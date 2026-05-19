#include<iostream>
using namespace std;

int main(){
    int number; 
    cout<<"enter the number: ";
    cin>>number;

    int store = 0;

    while (number!=0)
    {
        int calculate = number%10;
        store = store*10 + calculate;
        number = number/10;
    }
    cout<<store;
    
    
    return 0;
}


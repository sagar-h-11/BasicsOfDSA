#include<iostream>
using namespace std;

int main(){
    int number; 
    cout<<"enter the number : ";
    cin>>number;

    int add = 0;


    while (number!=0)
    {
        int calc = number%10;
        add = add+calc;
        number = number/10;
    }
    cout<<add;
    
    
    return 0;
}
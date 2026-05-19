#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number, power;
    
    cout<<"enter the number: ";
    cin>>number;

    cout<<"enter the power: ";
    cin>>power;

    int result = pow(number, power);
    cout<<"the result is : "<<result;

    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int number; 
    cout<<"enter the number: ";
    cin>>number;

    int product = 1;

    while(number!=0){
        int calc = number%10;
        product = product * calc;
        number = number/10;
    }
    cout<<product;

    
    return 0;
}
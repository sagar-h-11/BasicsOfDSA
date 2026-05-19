#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter the number: ";
    cin>>number;

    int count = 0;

    while (number!=0)
    {
        count++;
        number = number/10;
    }
    cout<<count;


    return 0;
}
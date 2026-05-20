#include<iostream>
using namespace std;

void checkNum(int a){
    if (a%2==0)
    {
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

int main(){
    checkNum(4);

    
    return 0;
}
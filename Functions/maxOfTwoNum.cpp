#include<iostream>
using namespace std;

void checkBigger(int a, int b){
    if (a>b)
    {
        cout<<a<<" is greater";
    }
    else{
        cout<<b<<" is greater";
    }
}

int main(){
    checkBigger(1,45);

    
    return 0;
}
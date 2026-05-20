#include<iostream>
using namespace std;

void checkTheNum(int a){
    if (a>0)
    {
        cout<<"Positive";
    }
    else if (a<0)
    {
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}

int main(){
    checkTheNum(4);

    
    return 0;
}
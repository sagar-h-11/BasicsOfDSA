#include<iostream>
using namespace std;

int subtractTwoInt(int a, int b){
    int diff = a-b;
    return diff;
}

int main(){
    int storeDiff = subtractTwoInt(5,2);
    cout<<storeDiff;

    
    return 0;
}
#include<iostream>
using namespace std;

float divideTwoNum(float a, float b){
    int store = a/b;
    return store;
}

int main(){
    int storeValue = divideTwoNum(4,2);
    cout<<storeValue;

    
    return 0;
}
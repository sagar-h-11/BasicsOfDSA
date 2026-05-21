#include<iostream>
using namespace std;

int simpleInterest(int principal, int rate, int year){
    int simpleInt = (principal*rate*year)/100;
    return simpleInt;
}

int main(){
    int storeSimpleInt = simpleInterest(2000, 5, 2);
    cout<<storeSimpleInt;


    return 0;
}

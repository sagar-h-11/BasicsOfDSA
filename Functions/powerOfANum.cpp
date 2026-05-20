#include<iostream>
#include<math.h>
using namespace std;

int power(int value, int power){
    int result = pow(value, power);
    return result;
}

int main(){
    int storePower = power(2,5);
    cout<<storePower;

    
    return 0;
}
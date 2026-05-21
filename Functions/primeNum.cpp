#include<iostream>
using namespace std;

void printPrime(int n){
    for (int i = 2; i <= n; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    
}

int main(){
    printPrime(6);


    return 0;
}
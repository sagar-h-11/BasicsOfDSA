#include<iostream>
using namespace std;

void printRev(int a){
    for (int i = a; i>=1; i--)
    {
        cout<<i<<" ";
    }
}

int main(){
    printRev(5);

    
    return 0;
}
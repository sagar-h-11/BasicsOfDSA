#include<iostream>
using namespace std;

void checkMin(int a, int b){
    if (a<b)
    {
        cout<<a<<" is smaller";
    }
    else {
        cout<<b<<" is smaller";
    }
}

int main(){
    checkMin(1,4);

    
    return 0;
}
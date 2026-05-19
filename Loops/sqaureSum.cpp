#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int sum = 0;
    for (int i = 0; i <=n; i++)
    {
        int sqaure = i*i;
        sum = sum+sqaure;
    }
    cout<<sum;
    
    return 0;
}
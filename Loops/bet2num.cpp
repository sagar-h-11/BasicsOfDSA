#include<iostream>
using namespace std;

int main(){
    int firstNum;
    int lastNum;
    cout<<"enter the beginning number : ";
    cin>>firstNum;
    cout<<"enter the end number : ";
    cin>>lastNum;
    int begin = firstNum+1;
    for (int i = begin ; i < lastNum; i++)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
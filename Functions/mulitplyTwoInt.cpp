#include<iostream>
using namespace std;

int printProduct(int a, int b){
    int product = a*b;
    return product;
}

int main(){
    int storeProduct = printProduct(2,5);
    cout<<storeProduct;
    return 0;
}
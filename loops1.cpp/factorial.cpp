#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int product = 1;
    for (int i = 1 ; i <= n ;i++){
        product *= i;
        
    }
    cout<<product;
    if (n == 0) cout<< 1 ;

}
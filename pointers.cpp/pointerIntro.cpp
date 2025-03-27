#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int* p = &a;
    int* q = &b;
    int sum;
    sum = *p + *q;
    cout<<sum;

 
} 
#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 5;
    int *p = &a;
    int *p1 = &b;
    int sum =  *p + *p1;
    cout<<sum;

}